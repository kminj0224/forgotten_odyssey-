/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015b18  Symbol: sharedEngine */

/* CocosDenshion::SimpleAudioEngine::sharedEngine() */

undefined4 CocosDenshion::SimpleAudioEngine::sharedEngine(void)

{
  SimpleAudioEngine *this;
  SimpleAudioEngine **ppSVar1;
  
  ppSVar1 = (SimpleAudioEngine **)(DAT_00015b3c + 0x15b20);
  if (*ppSVar1 == (SimpleAudioEngine *)0x0) {
    this = (SimpleAudioEngine *)operator_new(1);
    SimpleAudioEngine(this);
    *ppSVar1 = this;
  }
  return *(undefined4 *)(DAT_00015b40 + 0x15b38);
}


