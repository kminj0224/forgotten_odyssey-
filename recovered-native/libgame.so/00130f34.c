/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00130f34  Symbol: _INIT_63 */

longlong _INIT_63(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00130f7c;
  iVar2 = DAT_00130f7c + 0x130f3e;
  FUN_001c4bb4(iVar2);
  uVar3 = FUN_00201240(iVar2,*(undefined4 *)(DAT_00130f80 + 0x130f4c),
                       *(undefined4 *)(DAT_00130f84 + 0x130f4e));
  uVar3 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(iVar1 + 0x130f42),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x130f4a),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x130f52),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_2 << 0x20;
}


