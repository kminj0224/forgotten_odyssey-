/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e7ba4  Symbol: _INIT_25 */

longlong _INIT_25(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000e7bf0;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_000e7bf0 + 0xe7bb0),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xe7bb8),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xe7bc0),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xe7bd0);
  FUN_00201240(iVar1 + 0xe7bd0,*(undefined4 *)(DAT_000e7bf4 + 0xe7be6),
               *(undefined4 *)(DAT_000e7bf8 + 0xe7be8));
  return (ulonglong)param_4 << 0x20;
}


