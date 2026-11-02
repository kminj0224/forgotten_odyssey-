/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144df0  Symbol: resume */

/* cocos2d::CCDirector::resume() */

void cocos2d::CCDirector::resume(void)

{
  int *in_r0;
  
  if (*(char *)(in_r0 + 0xe) != '\0') {
    (**(code **)(*in_r0 + 0x18))(in_r0,*(code **)(*in_r0 + 0x18),in_r0[8],in_r0[9]);
    CCTime::gettimeofdayCocos2d((cc_timeval *)in_r0[0x15],(void *)0x0);
    *(char *)(in_r0 + 0xe) = '\0';
    in_r0[0x16] = 0;
  }
  return;
}


