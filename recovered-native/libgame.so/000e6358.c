/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e6358  Symbol: _INIT_24 */

longlong _INIT_24(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000e63a0;
  iVar2 = DAT_000e63a0 + 0xe6362;
  FUN_001c4bb4(iVar2);
  uVar3 = FUN_00201240(iVar2,*(undefined4 *)(DAT_000e63a4 + 0xe6370),
                       *(undefined4 *)(DAT_000e63a8 + 0xe6372));
  uVar3 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(iVar1 + 0xe6366),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xe636e),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xe6376),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2,
             extraout_s3);
  return (ulonglong)param_2 << 0x20;
}


