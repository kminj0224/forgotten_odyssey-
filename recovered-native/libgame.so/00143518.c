/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143518  Symbol: CCRectGetMidX */

/* cocos2d::CCRect::CCRectGetMidX(cocos2d::CCRect const&) */

void __thiscall cocos2d::CCRect::CCRectGetMidX(CCRect *this,CCRect *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __extendsfdf2(*(undefined4 *)this);
  uVar2 = __extendsfdf2(*(undefined4 *)(this + 8));
  uVar2 = __muldf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),DAT_00143548,DAT_0014354c);
  __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  __truncdfsf2();
  return;
}


