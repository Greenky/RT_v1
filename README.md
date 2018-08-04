# RT_v1
***RT_v1 by vmazurok (Valentine Mazurok)***
<hr> 
Third Project of Computer Graphic branch in UNIT Factory.
The goal was to create Ray Tracing program with configuration file, what include the scene, using just pure C and SDL Framework for visualization. Scene also have position and direction of camera, and two tipes of lightlight - point and linear

<b> How to use </b>

In MAC OS, open the folder in terminal, type `make` then execute the binary `RTv1` with scene by first parameter. </br>
Executable binary also included in repo.</br>
All scenes are based in "scenes\" folder.

<b> Сonfiguration file specification </b>
```
camera:
    dir - vector of camera direction
    cen - point of camera origin
light:
    type (point, direct) 
    cen - origin of light / dir - direction of light (based on type) 
    col - color of light
    int - light intensity 
sphere/plane/cylinder/cone
    rad - radius (for cylinder and sphere) 
    nor - normal (for plane) 
    ang - angle of cone (in degree) 
    dir - direction of cone and cylinder 
```
Visualization includes bling-phong shading scheme and multispot lighting. 
