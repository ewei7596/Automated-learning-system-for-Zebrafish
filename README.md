This is a project developed by Ellen Wei for Ellen Wei and Harshini Bulusu's independent research project regarding the effects of compounds like caffeine and melatonin on the learning ability of zebrafish.
To minimize environmental stressors that could impact the results of the study, feeding, learning, and recording devices were automized, with data being collected from a hard drive daily. Using this data, learning trends were established.

![IMG_6293](https://github.com/user-attachments/assets/4cacd25b-20bb-4446-b259-bf6fa52c51d3)

The code in motor_lights_code.ide is written for Arduino systems in Arduino IDE. It involves a mini Servo motor and traffic lights, and allows for periodic feeding. A red light will turn on prior to the feeding to induce learning as the fish begin to associate the red light with food. A green light is also periodically turned on, but no food is released. This is to ensure that the fish are not simply curious about the light - rather they are learning to associate the red light with food.

![IMG_6202](https://github.com/user-attachments/assets/9900c0c2-0a4c-4e3d-8e78-6bbe7a775293)

![IMG_6291](https://github.com/user-attachments/assets/5c4eabf7-aa09-466e-823b-243058a95e55) ![IMG_6294](https://github.com/user-attachments/assets/c3c73e12-1e81-47bc-b66e-fd8bbaab67d9)

The code for camera recording will be in automated_recording.py, coded in Python 3.8 for a NVIDIA Jetson TX2 model. It allows for automatic recording for a specified time, with the files being stored in a external hard drive.

The footage gathered from the camera is later processed with object detecting algorithms, and the swimming patterns of each fish are analyzed to determine if they are moving towards and stay at the red light's location.
