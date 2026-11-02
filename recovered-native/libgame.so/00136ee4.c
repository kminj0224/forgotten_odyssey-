/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00136ee4  Symbol: purgeSharedScheduler */

/* cocos2d::CCScheduler::purgeSharedScheduler() */

void cocos2d::CCScheduler::purgeSharedScheduler(void)

{
  CCObject **ppCVar1;
  
  ppCVar1 = (CCObject **)(DAT_00136ef8 + 0x136eec);
  CCObject::release(*ppCVar1);
  *ppCVar1 = (CCObject *)0x0;
  return;
}


