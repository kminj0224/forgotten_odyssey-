/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001442d4  Symbol: _INIT_90 */

longlong _INIT_90(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  CCRect *this;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00144304;
  this = (CCRect *)(DAT_00144304 + 0x1442e0);
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00144304 + 0x1442f0),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x1442f8),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            (this,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,extraout_s3);
  return (ulonglong)param_4 << 0x20;
}


