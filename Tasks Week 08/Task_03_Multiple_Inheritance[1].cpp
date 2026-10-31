#include <iostream>
using namespace std;

class Camera {
public:
    void capturePhoto() {
        cout << "Camera: Photo has been captured." << endl;
    }
};

class Alarm {
public:
    void ringAlarm() {
        cout << "Alarm: Security alarm is ringing!" << endl;
    }
};

class SmartSecurity : public Camera, public Alarm {
public:
    void showStatus() {
        cout << "SmartSecurity device is ACTIVE." << endl;
    }
};

int main() {
    SmartSecurity device;
    device.showStatus();
    device.capturePhoto();
    device.ringAlarm();
    return 0;
}
