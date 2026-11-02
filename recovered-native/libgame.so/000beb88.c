/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000beb88  Symbol: _INIT_2 */

longlong _INIT_2(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_000bebd4;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_000bebd4 + 0xbeb94),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0xbeb9c),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0xbeba4),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2,
             extraout_s3);
  FUN_001c4bb4(iVar1 + 0xbebb4);
  FUN_00201240(iVar1 + 0xbebb4,*(undefined4 *)(DAT_000bebd8 + 0xbebca),
               *(undefined4 *)(DAT_000bebdc + 0xbebcc));
  return (ulonglong)param_4 << 0x20;
}


