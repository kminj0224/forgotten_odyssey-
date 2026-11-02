/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001208ac  Symbol: _INIT_55 */

longlong _INIT_55(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_001208f4;
  iVar2 = DAT_001208f4 + 0x1208b6;
  FUN_001c4bb4(iVar2);
  uVar3 = FUN_00201240(iVar2,*(undefined4 *)(DAT_001208f8 + 0x1208c4),
                       *(undefined4 *)(DAT_001208fc + 0x1208c6));
  uVar3 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)(iVar1 + 0x1208ba),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x1208c2),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x1208ca),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_2 << 0x20;
}


