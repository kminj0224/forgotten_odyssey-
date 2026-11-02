/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8c20  Symbol: _INIT_4 */

longlong _INIT_4(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000c8c68;
  iVar2 = DAT_000c8c68 + 0xc8c2a;
  FUN_001c4bb4(iVar2);
  uVar3 = FUN_00201240(iVar2,*(undefined4 *)(DAT_000c8c6c + 0xc8c38),
                       *(undefined4 *)(DAT_000c8c70 + 0xc8c3a));
  uVar3 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(iVar1 + 0xc8c2e),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xc8c36),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xc8c3e),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2,
             extraout_s3);
  return (ulonglong)param_2 << 0x20;
}


