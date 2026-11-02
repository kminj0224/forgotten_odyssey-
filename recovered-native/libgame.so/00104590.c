/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00104590  Symbol: _INIT_39 */

longlong _INIT_39(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_001045d8;
  iVar2 = DAT_001045d8 + 0x10459a;
  FUN_001c4bb4(iVar2);
  uVar3 = FUN_00201240(iVar2,*(undefined4 *)(DAT_001045dc + 0x1045a8),
                       *(undefined4 *)(DAT_001045e0 + 0x1045aa));
  uVar3 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(iVar1 + 0x10459e),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x1045a6),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x1045ae),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_2 << 0x20;
}


