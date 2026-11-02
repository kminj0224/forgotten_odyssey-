/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134598  Symbol: _INIT_67 */

longlong _INIT_67(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_001345e0;
  iVar2 = DAT_001345e0 + 0x1345a2;
  FUN_001c4bb4(iVar2);
  uVar3 = FUN_00201240(iVar2,*(undefined4 *)(DAT_001345e4 + 0x1345b0),
                       *(undefined4 *)(DAT_001345e8 + 0x1345b2));
  uVar3 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(iVar1 + 0x1345a6),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x1345ae),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x1345b6),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_2 << 0x20;
}


