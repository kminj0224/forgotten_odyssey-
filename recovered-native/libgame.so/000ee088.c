/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ee088  Symbol: _INIT_32 */

longlong _INIT_32(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000ee0d4;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_000ee0d4 + 0xee094),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xee09c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xee0a4),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xee0b4);
  FUN_00201240(iVar1 + 0xee0b4,*(undefined4 *)(DAT_000ee0d8 + 0xee0ca),
               *(undefined4 *)(DAT_000ee0dc + 0xee0cc));
  return (ulonglong)param_4 << 0x20;
}


