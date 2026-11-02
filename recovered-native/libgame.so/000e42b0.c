/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e42b0  Symbol: _INIT_23 */

longlong _INIT_23(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  CCPoint *this;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000e42fc;
  this = (CCPoint *)(DAT_000e42fc + 0xe42b8);
  iVar2 = DAT_000e42fc + 0xe42c0;
  FUN_001c4bb4(iVar2);
  uVar3 = FUN_00201240(iVar2,*(undefined4 *)(DAT_000e4300 + 0xe42ca),
                       *(undefined4 *)(DAT_000e4304 + 0xe42cc));
  uVar3 = cocos2d::CCPoint::CCPoint(this,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xe42c4),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xe42cc),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2,
             extraout_s3);
  return (ulonglong)param_2 << 0x20;
}


