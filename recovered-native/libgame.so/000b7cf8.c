/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7cf8  Symbol: _INIT_1 */

longlong _INIT_1(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000b7d44;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_000b7d44 + 0xb7d04),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xb7d0c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xb7d14),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xb7d24);
  FUN_00201240(iVar1 + 0xb7d24,*(undefined4 *)(DAT_000b7d48 + 0xb7d3a),
               *(undefined4 *)(DAT_000b7d4c + 0xb7d3c));
  return (ulonglong)param_4 << 0x20;
}


