/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00133f20  Symbol: _INIT_66 */

longlong _INIT_66(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00133f68;
  iVar2 = DAT_00133f68 + 0x133f2a;
  FUN_001c4bb4(iVar2);
  uVar3 = FUN_00201240(iVar2,*(undefined4 *)(DAT_00133f6c + 0x133f38),
                       *(undefined4 *)(DAT_00133f70 + 0x133f3a));
  uVar3 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(iVar1 + 0x133f2e),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x133f36),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x133f3e),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_2 << 0x20;
}


