bool onBrightness(const String &deviceId, int &brightness) {
  Serial.printf("Device %s brightness %d\r\n", deviceId.c_str(), brightness);
  return true; // request handled properly
}

bool onAdjustBrightness(const String &deviceId, int &brightnessDelta) {
  absoluteBrightness += brightnessDelta; // calculate absolute brigthness
  Serial.printf("Device %s brightness changed about %i to %d\r\n", deviceId.c_str(), brightnessDelta, absoluteBrightness);
  brightnessDelta = absoluteBrightness; // return absolute brightness
  return true; // request handled properly
}
