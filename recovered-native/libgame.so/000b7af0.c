/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7af0  Symbol: _INIT_0 */

longlong _INIT_0(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000b7b3c;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_000b7b3c + 0xb7afc),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xb7b04),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xb7b0c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xb7b1c);
  FUN_00201240(iVar1 + 0xb7b1c,*(undefined4 *)(DAT_000b7b40 + 0xb7b32),
               *(undefined4 *)(DAT_000b7b44 + 0xb7b34));
  return (ulonglong)param_4 << 0x20;
}


