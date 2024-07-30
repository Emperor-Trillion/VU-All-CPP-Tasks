#include <iostream> 
#include <iomanip>
using namespace std;

struct PC                                                           //Name of my Structure is PC, containing only string type variables.
{
    string cpu, ram, ssd, gpu, psu, cAse, mb;                       //Members of my Data Structure
};
int main()
{
    PC homePC, officePC, gamingPC;                                  //Objects of my Data Structure

    homePC.cpu = "Intel Core i5 processor 9600K, 24M Cache, 5.30 GHz, 8 cores."; //Assignment of String in each Obejct
    homePC.ram = "16GB DDR5.";
    homePC.ssd = "500GB NVe.";
    homePC.gpu = "Nvidia Geforce RTX2080 (4GB DDR6, res 7680x4320, Cores Cuda 2944, clock 1,52GHz).";
    homePC.psu = "650 W, with one 6-pin and one 8-pin bronze sertificate.";
    homePC.cAse = "NZXT H7 (MB Support: E-ATX, ATX, Micro ATX, Mini ITXCard, Storage 2x3.5 or 4x2.5 inch, Included Fans: 2x120 mm.";
    homePC.mb = "ASUS PRIME Z790-V WIFI (4 x DIMM slots; 1 x PCIe 5.0 x16 slot 3 x PCIe 4.0 x16 slots 1 x PCIe 3.0 x1 slot;"
        "\n\t\t 3 x M.2 slots and 4 x SATA 6Gb / s ports; 1 x Realtek 1Gb Ethernet; Wi - Fi 5 (802.11 a / b / g / n / ac) Bluetooth v5.0;"
        "\n\t\t Rear USB (Total 8 ports) Front USB (Total 9 ports); Realtek 7.1 Surround Sound High Definition Audio CODEC).";

    officePC.cpu = "Intel Core i5 processor 10600K, 24M Cache, 5.30 GHz, 14 cores."; //Assignment of String in each Obejct
    officePC.ram = "32GB DDR5.";
    officePC.ssd = "1TB NVe.";
    officePC.gpu = "Nvidia Geforce RTX2080 (8GB DDR6, res 7680x4320, Cores Cuda 2944, clock 1,52GHz).";
    officePC.psu = "700 W, with one 6-pin and one 8-pin bronze sertificate.";
    officePC.cAse = "NZXT H7 (MB Support: E-ATX, ATX, Micro ATX, Mini ITXCard, Storage 2x3.5 or 4x2.5 inch, Included Fans: 2x120 mm.";
    officePC.mb = "ASUS PRIME Z790-V WIFI (4 x DIMM slots; 1 x PCIe 5.0 x16 slot 3 x PCIe 4.0 x16 slots 1 x PCIe 3.0 x1 slot;"
        "\n\t\t 3 x M.2 slots and 4 x SATA 6Gb / s ports; 1 x Realtek 1Gb Ethernet; Wi - Fi 5 (802.11 a / b / g / n / ac) Bluetooth v5.0;"
        "\n\t\t Rear USB (Total 8 ports) Front USB (Total 9 ports); Realtek 7.1 Surround Sound High Definition Audio CODEC).";

    gamingPC.cpu = "Intel Core i7 processor 13600K, 24M Cache, 5.30 GHz, 24 cores."; //Assignment of String in each Obejct
    gamingPC.ram = "64GB DDR5.";
    gamingPC.ssd = "2TB NVe.";
    gamingPC.gpu = "Nvidia Geforce RTX2080 (16GB DDR6, res 7680x4320, Cores Cuda 2944, clock 1,52GHz).";
    gamingPC.psu = "950 W, with one 6-pin and one 8-pin bronze sertificate.";
    gamingPC.cAse = "NZXT H7 (MB Support: E-ATX, ATX, Micro ATX, Mini ITXCard, Storage 2x3.5 or 4x2.5 inch, Included Fans: 2x120 mm";
    gamingPC.mb = "ASUS PRIME Z790-V WIFI (4 x DIMM slots; 1 x PCIe 5.0 x16 slot 3 x PCIe 4.0 x16 slots 1 x PCIe 3.0 x1 slot;"
        "\n\t\t 3 x M.2 slots and 4 x SATA 6Gb / s ports; 1 x Realtek 1Gb Ethernet; Wi - Fi 5 (802.11 a / b / g / n / ac) Bluetooth v5.0;"
        "\n\t\t Rear USB (Total 8 ports) Front USB (Total 9 ports); Realtek 7.1 Surround Sound High Definition Audio CODEC).";

    cout << "Please Select a Number For Computer Type." << endl;
    cout << "Press '1' Standard Home PC" << endl;
    cout << "Press '2' Standard Office PC" << endl;
    cout << "Press '3' Good Gaming PC" << endl;
    int input, iterator = 3;                //Input for User to Select option. Iterator for the while loop.
    while (iterator > 2 && iterator > 0)    //The iterator will always be true and the loop will always start because iterator = 3   
    {
        cin >> input;
        if (input == 1)                     //if input is = 1, the Standard HOME PC is chosen and objects printed
        {
            cout << setw(20) << left << "\t" << "YOU HAVE CHOSEN STANDARD HOME PC WITH THE FOLLOWING FEATURES" << endl << endl;
            cout << setw(40) << left << "\t" << "STANDARD HOME PC" << endl;
            cout << "CPU:" << setw(13) << left << " " << homePC.cpu << endl;
            cout << "RAM:" << setw(13) << left << " " << homePC.ram << endl;
            cout << "MEMORY(SSD):" << setw(5) << left << " " << homePC.ssd << endl;
            cout << "GPU:" << setw(13) << left << " " << homePC.gpu << endl;
            cout << "PSU:" << setw(13) << left << " " << homePC.psu << endl;
            cout << "CASE:" << setw(12) << left << " " << homePC.cAse << endl;
            cout << "MOTHERBOARD:" << setw(5) << left << " " << homePC.mb << endl;
            iterator = 1;                   //iterator is now = 1, and the while loop will end because condition will not be valid again
        }
        else if (input == 2)                //if input is = 2, the Standard OFFICE PC is chosen and objects printed
        {
            cout << setw(20) << left << "\t" << "YOU HAVE CHOSEN STANDARD OFFICE PC WITH THE FOLLOWING FEATURES" << endl << endl;
            cout << setw(40) << left << "\t" << "STANDARD OFFICE PC" << endl;
            cout << "CPU:" << setw(13) << left << " " << officePC.cpu << endl;
            cout << "RAM:" << setw(13) << left << " " << officePC.ram << endl;
            cout << "MEMORY(SSD):" << setw(5) << left << " " << officePC.ssd << endl;
            cout << "GPU:" << setw(13) << left << " " << officePC.gpu << endl;
            cout << "PSU:" << setw(13) << left << " " << officePC.psu << endl;
            cout << "CASE:" << setw(12) << left << " " << officePC.cAse << endl;
            cout << "MOTHERBOARD:" << setw(5) << left << " " << officePC.mb << endl;
            iterator = 1;                   //iterator is now = 1, and the while loop will end because condition will not be valid again
        }
        else if (input == 3)                //if input is = 3, the Standard GAMING PC is chosen and objects printed
        {
            cout << setw(20) << left << "\t" << "YOU HAVE CHOSEN GOOD GAMING PC WITH THE FOLLOWING FEATURES" << endl << endl;
            cout << setw(40) << left << "\t" << "GOOD GAMING PC" << endl;
            cout << "CPU:" << setw(13) << left << " " << gamingPC.cpu << endl;
            cout << "RAM:" << setw(13) << left << " " << gamingPC.ram << endl;
            cout << "MEMORY(SSD):" << setw(5) << left << " " << gamingPC.ssd << endl;
            cout << "GPU:" << setw(13) << left << " " << gamingPC.gpu << endl;
            cout << "PSU:" << setw(13) << left << " " << gamingPC.psu << endl;
            cout << "CASE:" << setw(12) << left << " " << gamingPC.cAse << endl;
            cout << "MOTHERBOARD:" << setw(5) << left << " " << gamingPC.mb << endl;
            iterator = 1;                   //iterator is now = 1, and the while loop will end because condition will not be valid again
        }
        else
        {
            cout << "Invalid Input, Try Again: ";       //This is printed in cycle if user doesn't input 1 or 2 or 3.
        }iterator++;                                    //iterator increases from 3 to 4 and continues to increase in wrong input is entered
    }
}