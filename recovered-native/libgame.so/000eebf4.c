/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eebf4  Symbol: _INIT_33 */

longlong _INIT_33(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000eec40;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_000eec40 + 0xeec00),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xeec08),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xeec10),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xeec20);
  FUN_00201240(iVar1 + 0xeec20,*(undefined4 *)(DAT_000eec44 + 0xeec36),
               *(undefined4 *)(DAT_000eec48 + 0xeec38));
  return (ulonglong)param_4 << 0x20;
}


