/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e8184  Symbol: _INIT_26 */

longlong _INIT_26(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000e81cc;
  iVar2 = DAT_000e81cc + 0xe818e;
  FUN_001c4bb4(iVar2);
  uVar3 = FUN_00201240(iVar2,*(undefined4 *)(DAT_000e81d0 + 0xe819c),
                       *(undefined4 *)(DAT_000e81d4 + 0xe819e));
  uVar3 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(iVar1 + 0xe8192),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xe819a),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xe81a2),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2,
             extraout_s3);
  return (ulonglong)param_2 << 0x20;
}


