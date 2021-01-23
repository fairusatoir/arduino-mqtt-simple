<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Thanks again! Now go create something AMAZING! :D
-->



<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://raw.githubusercontent.com/othneildrew/Best-README-Template/master/images/logo.png">
    <img src="https://raw.githubusercontent.com/othneildrew/Best-README-Template/master/images/logo.png" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">Arduino MQTT Simple</h3>

  <p align="center">
    An awesome README template to jumpstart your projects!
    <br />
    <a href="https://github.com/fairusatoir/arduino-mqtt-simple"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/fairusatoir/arduino-mqtt-simple">View Demo</a>
    ·
    <a href="https://github.com/fairusatoir/arduino-mqtt-simple/issues">Report Bug</a>
    ·
    <a href="https://github.com/fairusatoir/arduino-mqtt-simple/issues">Request Feature</a>
  </p>
</p>



<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgements">Acknowledgements</a></li>
  </ol>
</details>


<!-- ABOUT THE PROJECT -->
## About The Project

<p align="center">
  <a href="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS46nSgHnlJWRIzc1EOj24YyXBahkXdz7qUaA&usqp=CAU">
    <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcS46nSgHnlJWRIzc1EOj24YyXBahkXdz7qUaA&usqp=CAU" alt="Logo" width="max" height="max">
  </a>
</p>

This code is an example in creating a mqtt project on arduino. 

[mqtt_simple.ino](https://github.com/fairusatoir/arduino-mqtt-simple/blob/master/simple-mqtt/mqtt_simple.ino "mqtt_simple.ino") is code for sending data "Pesan ke - n". Arduino becomes a publisher and sends data to broker.


[mqtt_control.ino](https://github.com/fairusatoir/arduino-mqtt-simple/blob/master/simple-mqtt/mqtt_control.ino") is code to receive data from sender. Arduino becomes a subscriber and receives data from the broker


<!-- GETTING STARTED -->
## Getting Started

### Prerequisites
- [NodeMCU](https://en.wikipedia.org/wiki/NodeMCU "NodeMCU") 
- [Arduino IDE](https://www.arduino.cc/en/software)
- library [**ESP8266WiFi**](https://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/) and [**PubSubClient**](https://pubsubclient.knolleary.net/)
 
### Installation

1. Move library **ESP8266WiFi** and **PubSubClient** to *Arduino IDE dir/library*

#####MQTT in PC
######Linux

  - Install Mosquitto "sudo apt-get install mosquitto"
  - Install Mosquitto client "sudo apt-get install mosquitto-clients"


######Windows

- Dowload and install [Mosquitto](https://mosquitto.org/download/)

<!-- USAGE EXAMPLES -->
## Usage

This code does not require installation with other devices, just connect NodeMcu to a power source


<!-- ROADMAP -->
## Roadmap

See the [open issues](https://github.com/fairusatoir/arduino-mqtt-simple/issues) for a list of proposed features (and known issues).



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Open a Pull Request



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact

Your Name - [@your_twitter](https://twitter.com/zuhairatoir) - fairusatoir98@gmail.com

Project Link: [https://github.com/fairusatoir/arduino-mqtt-simple](https://github.com/fairusatoir/arduino-mqtt-simple)



<!-- ACKNOWLEDGEMENTS -->
## Acknowledgements

- [Install Arduino IDE ](https://www.arduino.cc/en/main/software)
- [Downlaod pubsubclient](https://www.arduinolibraries.info/libraries/pub-sub-client) dan pindah ke */Arduino/libraries
- [Install Nodemcu Board ](https://www.teachmemicro.com/intro-nodemcu-arduino/)





<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/fairusatoir/arduino-mqtt-simple.svg?style=for-the-badge
[contributors-url]: https://github.com/fairusatoir/arduino-mqtt-simple/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/fairusatoir/arduino-mqtt-simple.svg?style=for-the-badge
[forks-url]: https://github.com/fairusatoir/arduino-mqtt-simple/network/members
[stars-shield]: https://img.shields.io/github/stars/fairusatoir/arduino-mqtt-simple.svg?style=for-the-badge
[stars-url]: https://github.com/fairusatoir/arduino-mqtt-simple/stargazers
[issues-shield]: https://img.shields.io/github/issues/fairusatoir/arduino-mqtt-simple.svg?style=for-the-badge
[issues-url]: https://github.com/fairusatoir/arduino-mqtt-simple/issues
[license-shield]: https://img.shields.io/github/license/fairusatoir/arduino-mqtt-simple.svg?style=for-the-badge
[license-url]: https://github.com/fairusatoir/arduino-mqtt-simple/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/fairusatoir
[product-screenshot]: images/screenshot.png
