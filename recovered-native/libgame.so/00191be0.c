/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00191be0  Symbol: FUN_00191be0 */

byte * FUN_00191be0(byte *param_1,size_t param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar5 = DAT_00191d38 + 0x191bec;
  if ((param_1 == (byte *)0x0) ||
     (((int)param_2 < 1 && (param_2 = strlen((char *)param_1), (int)param_2 < 0)))) {
    pbVar6 = (byte *)0x0;
  }
  else {
    pbVar6 = param_3;
    if ((param_3 == (byte *)0x0) &&
       (param_3 = (byte *)(***(code ***)(iVar5 + DAT_00191d3c))(param_2 + 1), pbVar6 = param_3,
       param_3 == (byte *)0x0)) {
      (***(code ***)(iVar5 + DAT_00191d40))
                (**(undefined4 **)(iVar5 + DAT_00191d44),iVar5 + DAT_00191d48);
    }
    else {
      for (; param_2 != 0; param_2 = param_2 + iVar5) {
        if (((int)param_2 < 3) || (*param_1 != 0x25)) {
LAB_00191d1c:
          bVar1 = *param_1;
          iVar5 = -1;
          param_1 = param_1 + 1;
          *param_3 = bVar1;
        }
        else {
          bVar1 = param_1[1];
          bVar4 = bVar1 - 0x30;
          bVar7 = (byte)(bVar1 + 0x9f) < 6;
          if (((!bVar7) && ((9 < bVar4 && (5 < (byte)(bVar1 + 0xbf))))) ||
             ((bVar2 = param_1[2], 5 < (byte)(bVar2 + 0x9f) &&
              ((9 < (byte)(bVar2 - 0x30) && (5 < (byte)(bVar2 + 0xbf))))))) goto LAB_00191d1c;
          if (9 < bVar4) {
            if (bVar7) {
              bVar4 = bVar1 + 0xa9;
              goto LAB_00191cce;
            }
            if ((byte)(bVar1 + 0xbf) < 6) {
              bVar4 = bVar1 - 0x37;
              goto LAB_00191cce;
            }
          }
          else {
LAB_00191cce:
            *param_3 = bVar4;
          }
          bVar1 = param_1[2];
          if ((byte)(bVar1 - 0x30) < 10) {
            cVar3 = *param_3 * '\x10' + -0x30;
LAB_00191d12:
            *param_3 = bVar1 + cVar3;
          }
          else {
            if ((byte)(bVar1 + 0x9f) < 6) {
              cVar3 = *param_3 * '\x10' + -0x57;
              goto LAB_00191d12;
            }
            if ((byte)(bVar1 + 0xbf) < 6) {
              cVar3 = *param_3 * '\x10' + -0x37;
              goto LAB_00191d12;
            }
          }
          param_1 = param_1 + 3;
          iVar5 = -3;
        }
        param_3 = param_3 + 1;
      }
      *param_3 = 0;
    }
  }
  return pbVar6;
}


