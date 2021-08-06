A cheap, 3D printed absolute position encoder knob based on a low-cost AS5600 breakout module.

<img src="docs/demo.gif"/>

Note: R1 is removed on the AS5600 module in order to run it at 5V instead of 3.3V, which I found was more reliable and stable. No level-shifting is needed to connect to an ESP32 at 3.3V since it uses I2C.

Demo firmware using a TTGO T-Display ESP32 board is provided.

See how it works:

<a href="https://www.youtube.com/watch?v=Ww0m7PPZYXU"><img src="https://img.youtube.com/vi/Ww0m7PPZYXU/mqdefault.jpg"/></a>

# Parts needed
- AS5600 module (R1 removed to run at 5V)
- 4x M3x6 screws with countersunk head
- 608 "skateboard" bearing
- 3D printed parts (see below)

# 3D Printed Parts
<img src="docs/assembly.png" width="300" />

Download the Fusion 360 design file [here](https://github.com/scottbez1/AS5600Knob/raw/master/as5600Knob%20v23.f3d) or [preview it in your browser](https://a360.co/3juvdKy).

## Base Plate
<img src="docs/base_plate.png" width="300" />

Print settings:
- 0.2mm layers

## Bearing Mount
<img src="docs/bearing_mount.png" width="300" />

Print settings:
- 0.15mm layers (finer layers for small details of tabs)

## Knob
<img src="docs/knob.png" width="300" />

Print settings:
- Seam: rear (seam is aligned with index notch to reduce visibility)
- 0.2mm lyaers

# License

Copyright 2021 Scott Bezek

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
