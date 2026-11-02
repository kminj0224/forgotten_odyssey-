/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015dc68  Symbol: purgeSharedUserDefault */

/* cocos2d::CCUserDefault::purgeSharedUserDefault() */

void cocos2d::CCUserDefault::purgeSharedUserDefault(void)

{
  CCUserDefault *this;
  CCUserDefault **ppCVar1;
  
  ppCVar1 = *(CCUserDefault ***)(DAT_0015dc88 + 0x15dc70);
  this = *ppCVar1;
  if (this != (CCUserDefault *)0x0) {
    ~CCUserDefault(this);
    operator_delete(this);
  }
  *ppCVar1 = (CCUserDefault *)0x0;
  return;
}


