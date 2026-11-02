/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb644  Symbol: _INIT_7 */

longlong _INIT_7(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000cb690;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_000cb690 + 0xcb654),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xcb65c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xcb664),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xcb674);
  FUN_00201240(iVar1 + 0xcb674,*(undefined4 *)(DAT_000cb694 + 0xcb686),
               *(undefined4 *)(DAT_000cb698 + 0xcb688));
  return (ulonglong)param_4 << 0x20;
}


