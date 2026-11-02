/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00166e34  Symbol: _INIT_153 */

longlong _INIT_153(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  CCSize *this;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00166e64;
  this = (CCSize *)(DAT_00166e64 + 0x166e40);
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00166e64 + 0x166e48),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize(this,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x166e50),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_4 << 0x20;
}


