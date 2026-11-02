/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001073a0  Symbol: _INIT_41 */

longlong _INIT_41(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_001073ec;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_001073ec + 0x1073ac),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x1073b4),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x1073bc),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x1073cc);
  FUN_00201240(iVar1 + 0x1073cc,*(undefined4 *)(DAT_001073f0 + 0x1073e2),
               *(undefined4 *)(DAT_001073f4 + 0x1073e4));
  return (ulonglong)param_4 << 0x20;
}


