# AS5600 [![Build Status](https://travis-ci.com/Seeed-Studio/Seeed_Arduino_AS5600.svg?branch=master)](https://travis-ci.com/Seeed-Studio/Seeed_Arduino_AS5600)
AS5600 12-bits Absolute Magnetic Encoder

Features:
- Detection of the magnet
- Get magnetic intensity
- Get the Angle information

## operation menual

You can do full function with fullfucton demo
```
AS5600 Serial Interface Program

Raw angle = 305.9790000000

1 - Set start position	|   6 - get end position
2 - Set end position	|   7 - get raw angle
3 - Set max angle range	|   8 - get scaled angle
4 - Get max angle range	|   9 - detect magnet
5 - Get start position 		|  10 - get magnet strength

Number of burns remaining: 3
96 - Burn Angle
98 - Burn Settings (one time)

```
****Note: Rotate the magnet before use to make sure that the magnet is close to 0 and 360 through get raw angle****
1. If you just need raw data, input `7`.  Its direction is based on [AS5600 datasheet](https://ams.com/documents/20143/36005/AS5600_DS000365_5-00.pdf/649ee61c-8f9a-20df-9e10-43173a3eb323) Figure 35: Raw Angle in Clockwise Direction 
<p align="center">
  <img src="https://user-images.githubusercontent.com/4081906/57281395-7f757c00-70dd-11e9-85a4-2e2558ebf691.png" alt="aw Angle in Clockwise Direction "/>
</p>

2. If you want to customize the direction, you can use the scaled Angle(`8`). But you need to set the start(`1`) and(`2`) end positions , Burn Angle(`96`)

----

This software is written by Baozhu Zuo from [Seeed Technology Inc.](http://www.seeed.cc) and is licensed under [The MIT License](http://opensource.org/licenses/mit-license.php). Check License.txt/LICENSE for the details of MIT license.<br>

Contributing to this software is warmly welcomed. You can do this basically by<br>
[forking](https://help.github.com/articles/fork-a-repo), committing modifications and then [pulling requests](https://help.github.com/articles/using-pull-requests) (follow the links above<br>
for operating guide). Adding change log and your contact into file header is encouraged.<br>
Thanks for your contribution.

Seeed is a hardware innovation platform for makers to grow inspirations into differentiating products. By working closely with technology providers of all scale, Seeed provides accessible technologies with quality, speed and supply chain knowledge. When prototypes are ready to iterate, Seeed helps productize 1 to 1,000 pcs using in-house engineering, supply chain management and agile manufacture forces. Seeed also team up with incubators, Chinese tech ecosystem, investors and distribution channels to portal Maker startups beyond.
