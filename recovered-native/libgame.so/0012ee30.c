/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012ee30  Symbol: _INIT_61 */

longlong _INIT_61(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_0012ee7c;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_0012ee7c + 0x12ee3c),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x12ee44),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x12ee4c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001c4bb4(iVar1 + 0x12ee5c);
  FUN_00201240(iVar1 + 0x12ee5c,*(undefined4 *)(DAT_0012ee80 + 0x12ee72),
               *(undefined4 *)(DAT_0012ee84 + 0x12ee74));
  return (ulonglong)param_4 << 0x20;
}


