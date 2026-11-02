/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a168  Symbol: _INIT_43 */

longlong _INIT_43(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0010a1b4;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0010a1b4 + 0x10a174),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x10a17c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x10a184),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x10a194);
  FUN_00201240(iVar1 + 0x10a194,*(undefined4 *)(DAT_0010a1b8 + 0x10a1aa),
               *(undefined4 *)(DAT_0010a1bc + 0x10a1ac));
  return (ulonglong)param_4 << 0x20;
}


