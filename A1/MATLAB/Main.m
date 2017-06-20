% ME 561: Fluid Power Controls
% Assignment 1, Question 3
% Sebastien Blanchet
% June 19th 2017

% Initialize script
clear; close all; clc

% Constant parameters as per assignment
Q = 1;          % Flow rate gpm
ID = 1.5;       % Pipe ID  in
esp = 30E-6;    % Roughness
V = 50;         % Tank volume gal
S = 64;         % Shape factor
K = 10;         % Globe valve K factor
nu = 221.078;   % Viscocity cPs
T_sys = 25;		% System temperature
a = 0.005;		% Relative ammount of trapped air in system

% Model segment lengths
La = 10;        
Lb = 5;
Lc = 10;
Ld = 20;

% Create vectors of flow rates and diameters for loop
Q_vec = [1,5,15];
ID_vec = [1.5, 0.75];

% Calcs to get equivalent length due to glove valve
v = Q/(449*pi/4*(ID/12)^2);
Re = 7740*v*ID/nu; 
f = S/Re;
Leq = K*ID/f/12;

% Create solution vectors
P_rep(1:3,1:200,1:2) = 0;
V_rep(1:3,1:200,1:2) = 0;
Q_rep(1:3,1:200,1:2) = 0;

% String vectors for plotting
plot_t = {'Simulation Results for 1.50 in ID',...
    'Simulation Results for 0.75 in ID'};
name = {'Plot\P_150','Plot\P_075'};

% Loop to run all 6 simulations, plot data
for i=1:3
    for j=1:2
        % Set current flow rates and diameters
        Q = Q_vec(i);
        ID = ID_vec(j);
		% Run simulation
        sim('Simscape\Model');
		% Get size of solution
        n = length(P);
		% Add current solution to main solution array
        P_rep(i,1 : n, j) = P(:,2);
        V_rep(i,1 : n, j) = Vin(:,2);
        Q_rep(i,1 : n, j) = Qin(:,2);
        
		% Go to figure
        figure(j);
        
		% Plot
        subplot(3,1,1);
        hold on
        plot(tout, P_rep(i,1:n, j));
        ylabel('Pressure P [psi]');
        title(plot_t(j));
        legend('Q = 1 [gpm]','Q = 5 [gpm]','Q = 15 [gpm]');

        subplot(3,1,2);
        hold on
        plot(tout, V_rep(i,1:n, j));
        ylabel('Volume V [gal]');
        legend('Q = 1 [gpm]','Q = 5 [gpm]','Q = 15 [gpm]');

        subplot(3,1,3);
        hold on
        plot(tout, Q_rep(i,1:n, j));
        xlabel('Time t [sec]');
        ylabel('Flow Rate Q [gpm]');
        legend('Q = 1 [gpm]','Q = 5 [gpm]','Q = 15 [gpm]');

    end
end  
