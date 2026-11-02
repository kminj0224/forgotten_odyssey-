/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148a64  Symbol: _INIT_102 */

longlong _INIT_102(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  CCSize *this;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00148a94;
  this = (CCSize *)(DAT_00148a94 + 0x148a70);
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00148a94 + 0x148a78),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize(this,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x148a80),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_4 << 0x20;
}


