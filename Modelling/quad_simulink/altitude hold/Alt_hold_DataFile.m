% Simscape(TM) Multibody(TM) version: 4.8

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(9).translation = [0.0 0.0 0.0];
smiData.RigidTransform(9).angle = 0.0;
smiData.RigidTransform(9).axis = [0.0 0.0 0.0];
smiData.RigidTransform(9).ID = '';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [-0.72407949161282237 389.69184610828432 50.000000000000043];  % mm
smiData.RigidTransform(1).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(1).axis = [1 0 0];
smiData.RigidTransform(1).ID = 'B[frame-1:-:PROPELLER - 8x4.5 CCW-- full-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [-5.6399329650957952e-14 11.500000000000114 7.1054273576010019e-15];  % mm
smiData.RigidTransform(2).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(2).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(2).ID = 'F[frame-1:-:PROPELLER - 8x4.5 CCW-- full-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [0.30815389171987007 -390.72407949161152 50.000000000000043];  % mm
smiData.RigidTransform(3).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(3).axis = [1 0 0];
smiData.RigidTransform(3).ID = 'B[frame-1:-:PROPELLER - 8x4.5 CCW-- full-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [-5.9507954119908391e-14 11.500000000000114 -7.1054273576010019e-14];  % mm
smiData.RigidTransform(4).angle = 2.0943951023931957;  % rad
smiData.RigidTransform(4).axis = [0.57735026918962573 -0.57735026918962573 0.57735026918962584];
smiData.RigidTransform(4).ID = 'F[frame-1:-:PROPELLER - 8x4.5 CCW-- full-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [-390.41592559989573 -1.0322333833272523 50.000000000000043];  % mm
smiData.RigidTransform(5).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(5).axis = [1 0 0];
smiData.RigidTransform(5).ID = 'B[frame-1:-:PROPELLER - 8x4.5 CCW-Mirror1-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [40 11.500000000000114 -1.7763568394002505e-15];  % mm
smiData.RigidTransform(6).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(6).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(6).ID = 'F[frame-1:-:PROPELLER - 8x4.5 CCW-Mirror1-1]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(7).translation = [390.00000000000006 0 50.000000000000043];  % mm
smiData.RigidTransform(7).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(7).axis = [1 0 0];
smiData.RigidTransform(7).ID = 'B[frame-1:-:PROPELLER - 8x4.5 CCW-Mirror1-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(8).translation = [39.999999999999915 11.500000000000114 -7.4251715886930469e-13];  % mm
smiData.RigidTransform(8).angle = 2.0943951023931953;  % rad
smiData.RigidTransform(8).axis = [0.57735026918962584 -0.57735026918962584 0.57735026918962584];
smiData.RigidTransform(8).ID = 'F[frame-1:-:PROPELLER - 8x4.5 CCW-Mirror1-2]';

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(9).translation = [173.35215044850867 383.96257333599283 764.58945053880893];  % mm
smiData.RigidTransform(9).angle = 0;  % rad
smiData.RigidTransform(9).axis = [0 0 0];
smiData.RigidTransform(9).ID = 'RootGround[frame-1]';


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(3).mass = 0.0;
smiData.Solid(3).CoM = [0.0 0.0 0.0];
smiData.Solid(3).MoI = [0.0 0.0 0.0];
smiData.Solid(3).PoI = [0.0 0.0 0.0];
smiData.Solid(3).color = [0.0 0.0 0.0];
smiData.Solid(3).opacity = 0.0;
smiData.Solid(3).ID = '';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 4.4109401251988816;  % kg
smiData.Solid(1).CoM = [-0.063785915621428824 -0.15830177919919419 1.0368807584263557];  % mm
smiData.Solid(1).MoI = [128416.04028764178 128415.88362591779 255964.2771411454];  % kg*mm^2
smiData.Solid(1).PoI = [1.6365090615173479 0.6594101292037835 -0.15459427166224912];  % kg*mm^2
smiData.Solid(1).color = [0.79607843137254897 0.82352941176470584 0.93725490196078431];
smiData.Solid(1).opacity = 1;
smiData.Solid(1).ID = 'frame*:*Default';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 0.0061053719906995086;  % kg
smiData.Solid(2).CoM = [0 1.2853448205600579 0];  % mm
smiData.Solid(2).MoI = [12.782981371116833 12.88545507666926 0.15655852931853104];  % kg*mm^2
smiData.Solid(2).PoI = [0 -0.01460602088907469 0];  % kg*mm^2
smiData.Solid(2).color = [0 1 0];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = 'PROPELLER - 8x4*:*Défaut';

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 0.0061052446267698471;  % kg
smiData.Solid(3).CoM = [39.999999960591296 1.2853228781777262 1.4347818792310323e-07];  % mm
smiData.Solid(3).MoI = [12.781088813395158 12.883570155783563 0.15656950018054955];  % kg*mm^2
smiData.Solid(3).PoI = [-8.3592452043264402e-10 0.014398325598951595 0];  % kg*mm^2
smiData.Solid(3).color = [1 1 1];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = 'PROPELLER - 8x4*:*Default';


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(4).Rz.Pos = 0.0;
smiData.RevoluteJoint(4).ID = '';

smiData.RevoluteJoint(1).Rz.Pos = 98.168009387231024;  % deg
smiData.RevoluteJoint(1).ID = '[frame-1:-:PROPELLER - 8x4.5 CCW-- full-1]';

smiData.RevoluteJoint(2).Rz.Pos = 59.642759048450344;  % deg
smiData.RevoluteJoint(2).ID = '[frame-1:-:PROPELLER - 8x4.5 CCW-- full-2]';

smiData.RevoluteJoint(3).Rz.Pos = 90;  % deg
smiData.RevoluteJoint(3).ID = '[frame-1:-:PROPELLER - 8x4.5 CCW-Mirror1-1]';

smiData.RevoluteJoint(4).Rz.Pos = 76.359711718869647;  % deg
smiData.RevoluteJoint(4).ID = '[frame-1:-:PROPELLER - 8x4.5 CCW-Mirror1-2]';

