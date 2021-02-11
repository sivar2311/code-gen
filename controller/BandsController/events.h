// BandsController

void setBandsOnServer(const String& bands, int &level) {
  <%= device.deviceInstance %>.sendBandsEvent(bands, level);
}