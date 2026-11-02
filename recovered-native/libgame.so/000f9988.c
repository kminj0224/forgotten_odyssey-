/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f9988  Symbol: _INIT_35 */

longlong _INIT_35(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000f99d4;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_000f99d4 + 0xf9994),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xf999c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xf99a4),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xf99b4);
  FUN_00201240(iVar1 + 0xf99b4,*(undefined4 *)(DAT_000f99d8 + 0xf99ca),
               *(undefined4 *)(DAT_000f99dc + 0xf99cc));
  return (ulonglong)param_4 << 0x20;
}


