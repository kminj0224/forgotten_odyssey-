/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012c02c  Symbol: _INIT_58 */

longlong _INIT_58(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0012c078;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0012c078 + 0x12c038),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x12c040),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x12c048),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x12c058);
  FUN_00201240(iVar1 + 0x12c058,*(undefined4 *)(DAT_0012c07c + 0x12c06e),
               *(undefined4 *)(DAT_0012c080 + 0x12c070));
  return (ulonglong)param_4 << 0x20;
}


