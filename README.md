This is a project developed by Ellen Wei for Ellen Wei and Harshini Bulusu's independent research project regarding the effects of compounds like caffeine and melatonin on the learning ability of zebrafish.
To minimize environmental stressors that could impact the results of the study, feeding, learning, and recording devices were automized, with data being collected from a hard drive daily. Using this data, learning trends were established.

The code in motor_lights_code.ide is written for Arduino systems in Arduino IDE. It involves a mini Servo motor and traffic lights, and allows for periodic feeding. A red light will turn on prior to the feeding to induce learning as the fish begin to associate the red light with food. A green light is also periodically turned on, but no food is released. This is to ensure that the fish are not simply curious about the light - rather they are learning to associate the red light with food.

The code for camera recording will be in _______, coded in Python 3.8 for a Raspberry Pi 3 model. It allows for automatic recording for a specified time, with the files being stored in a external hard drive.

The footage gathered from the camera is later processed with object detecting algorithms, and the swimming patterns of each fish are analyzed to determine if they are moving towards and stay at the red light's location.
