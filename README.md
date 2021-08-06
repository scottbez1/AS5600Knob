A cheap, 3D printed absolute position encoder knob based on a low-cost AS5600 breakout module.

![Demo gif](docs/demo.gif)

Note: R1 is removed on the AS5600 module in order to run it at 5V instead of 3.3V, which I found was more reliable and stable. No level-shifting is needed to connect to an ESP32 at 3.3V since it uses I2C.

Demo firmware using a TTGO T-Display ESP32 board is provided.

# Parts needed
- AS5600 module (R1 removed to run at 5V)
- 4x M3x6 screws with countersunk head
- 608 "skateboard" bearing
- 3D printed parts (see below)

# 3D Printed Parts
![Full assembly](docs/assembly.png)

Download the Fusion 360 design file [here](as5600Knob v23.f3d).

## Base Plate
![Base Plate](docs/base_plate.png)
Print settings:
- 0.2mm layers

## Bearing Mount
![Bearing Mount](docs/bearing_mount.png)
Print settings:
- 0.15mm layers (finer layers for small details of tabs)

## Knob
![Knob](docs/knob.png)
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
