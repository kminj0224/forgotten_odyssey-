/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dc180  Symbol: _INIT_21 */

longlong _INIT_21(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  CCPoint *this;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000dc1cc;
  this = (CCPoint *)(DAT_000dc1cc + 0xdc188);
  iVar2 = DAT_000dc1cc + 0xdc190;
  FUN_001c4bb4(iVar2);
  uVar3 = FUN_00201240(iVar2,*(undefined4 *)(DAT_000dc1d0 + 0xdc19a),
                       *(undefined4 *)(DAT_000dc1d4 + 0xdc19c));
  uVar3 = cocos2d::CCPoint::CCPoint(this,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xdc194),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xdc19c),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2,
             extraout_s3);
  return (ulonglong)param_2 << 0x20;
}


