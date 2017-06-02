%% Microstrip Calculator June 2017 Pouyan Keshavarzian
% Papers by Bahl
% Book by Pozar
% Book by Steer
% Referenced Thomas Apperley's Calculator
clc 
clear all
close all

%---CONSTANTS---
c = 2.99792458e8;                   %Speed of light
e = 2.718281828;                    %Eulers constant
Epsilon_0 = 8.85418782e-12;         %Permittivity of free space
Mu_0 = 1.256637061e-6;              %Permeability of free space
CuResist = 16.78e-9;                %Resistivity of Copper
CF = 0.0254;                        %Thou to mm conversion factor
eta = 120*pi;                       %Intrinsic Impedance of free space
%---DESIGN PARAMTERS-----
Frequency = 9e9;
Omg = 2.*pi.*Frequency;
WaveNum = Omg/c;
%substrate dimensions in mm (using conversion factor)
Height = 100*CF;  
Width = 24*CF;
copper_t = 1.4*CF;
Sub_epsr = 10.2;
Sub_lsstan = 0.0023;


% calculate t<h ratio

t_H = copper_t/Height;

% calculate effective width if necessary, followed by effective
% permittivity
if (t_H > 0.005)
    if (Width/Height > 0.5*pi)
        W_eff = (Width + copper_t/pi*(1+log(2*Height/copper_t)));
    else
        W_eff = (Width + copper_t/pi*(1+log(4*pi*Width/copper_t))); 
    end
end

% calculate W_H ratio
if (t_H > 0.005)
    W_H = W_eff/Height;
else
    W_H = Width/Height;
end

% Calculate effective permittivity and characteristic impedance

if(W_H > 1)
    
    eps_eff = (Sub_epsr+1)/2 + (Sub_epsr-1)/2*(1 + 12/W_H)^(-1/2);
    Z_0 = eta/sqrt(eps_eff)/(W_H+1.393+0.667*log(W_H+1.444));
    
else
    eps_eff = (Sub_epsr+1)/2 + (Sub_epsr-1)/2*((1 + 12/W_H)^(-1/2)+0.04*(1-W_H)^2);
    Z_0 = 60/sqrt(eps_eff)*log(8/W_H+0.25*W_H);
end

% Do quick Surface wave calc 
if(Sub_epsr > 10)
    F_t = 10.6/(Height/10*sqrt(Sub_epsr))*1e9;
else
    F_t = c/(2*pi*Height/1000)*sqrt(2/(Sub_epsr-1))*atan(Sub_epsr);
end
