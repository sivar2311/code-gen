bool onLockState(const String &deviceId, String &control) {
  Serial.printf("Device %s: %s\r\n", deviceId.c_str(), control.c_str());
  return true;
}
