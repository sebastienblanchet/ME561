% ME 561: Fluid Power Controls
% Assignment 1
% Sebastien Blanchet
% June 20th 2017

% init
clear; close all; clc

% Question 3
Q = 1;           % Flow rate gpm
ID = 1.5;       % Pipe ID  in
esp = 30E-6;    % Roughness
V = 50;         % Tank volume gal
S = 64;         % Shape factor
K = 10;         % Globe valve K factor
nu = 221.078;   % viscocity cPs
La = 10;        
Lb = 5;
Lc = 10;
Ld = 20;

Q_vec = [1,5,15];
ID_vec = [1.5, 0.75];

% Calcs
v = Q/(449*pi/4*(ID/12)^2);
Re = 7740*v*ID/nu; 
f = S/Re;
Leq = K*ID/f/12;

P_rep(1:3,1:200,1:2) = 0;
V_rep(1:3,1:200,1:2) = 0;
Q_rep(1:3,1:200,1:2) = 0;

plot_t = {'Simulation Results for 1.50 in ID',...
    'Simulation Results for 0.75 in ID'};
name = {'Plot\P_150','Plot\P_075'};

for i=1:3
    for j=1:2
        % Run Sim
        Q = Q_vec(i);
        ID = ID_vec(j);
        sim('Simscape\Model');
        n = length(P);
        P_rep(i,1 : n, j) = P(:,2);
        V_rep(i,1 : n, j) = Vin(:,2);
        Q_rep(i,1 : n, j) = Qin(:,2);
        
        figure(j);
        
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

% print(1,'-djpeg', 'Plot/P_150');
% print(2,'-djpeg', 'Plot/P_075');
