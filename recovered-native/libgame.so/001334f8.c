/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001334f8  Symbol: Sound_ReStart */

/* GameOption::Sound_ReStart() */

void GameOption::Sound_ReStart(void)

{
  char *pcVar1;
  
  if (***(char ***)(DAT_0013351c + 0x133500) != '\0') {
    pcVar1 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playBackgroundMusic
              (pcVar1,SUB41(*(undefined4 *)(DAT_00133520 + 0x133514),0));
  }
  return;
}


