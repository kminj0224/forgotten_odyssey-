/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143568  Symbol: CCRectGetMidY */

/* cocos2d::CCRect::CCRectGetMidY(cocos2d::CCRect const&) */

void __thiscall cocos2d::CCRect::CCRectGetMidY(CCRect *this,CCRect *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __extendsfdf2(*(undefined4 *)(this + 4));
  uVar2 = __extendsfdf2(*(undefined4 *)(this + 0xc));
  uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_00143598,DAT_0014359c);
  __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  __truncdfsf2();
  return;
}


