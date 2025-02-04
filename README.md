# OrbbecCam
OrbbecCam Test

## Dependency

### opencv
`sudo apt install libopencv-dev`

## Build

### submodule

```
git submodule init
git submodule update
```

### cmake

```
cmake -B build 
cd build
make -j4
sudo src/orbbec_camera_test
```

## Problem

> fatal error: opencv2/opencv.hpp: No such file or directory #include ＜opencv2/opencv.hpp＞

`sudo ln -s /usr/include/opencv4/opencv2/ /usr/include`

