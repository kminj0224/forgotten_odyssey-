/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012baa8  Symbol: _INIT_57 */

longlong _INIT_57(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0012bb00;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0012bb00 + 0x12bab4),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x12babc),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x12bac4),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x12bad4);
  FUN_00201240(iVar1 + 0x12bad4,*(undefined4 *)(DAT_0012bb04 + 0x12baea),
               *(undefined4 *)(DAT_0012bb08 + 0x12baec));
  cocos2d::CCPoint::CCPoint(*(CCPoint **)(DAT_0012bb0c + 0x12baf8));
  return (ulonglong)param_4 << 0x20;
}


