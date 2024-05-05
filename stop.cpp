#include<iostream>
using namespace std;
 
struct Sender{
    int PacketNo;
    int Sent;
    int Acknowledged;
}S[6];
 
struct Receiver{
    int AcknowledgementNo;
    int Received;
    int AcknowledgementSent;
}R[6];
 
/* We are assuming the 4th data packet is lost and the acknowledgement of 6 data packet is also lost */
int i=0;
 
int main() {
     
    //Making the data packets at Sender side from 0 to 5
    for (i=0; i<6; i++){
        S[i].Sent=0;
        S[i].Acknowledged=0;
        S[i].PacketNo=i;
    }
     
    //Making the data packets at Sender side from 1 to 6
    for (i=1; i<=6; i++){
        R[i].AcknowledgementSent=0;
        R[i].Received=0;
        R[i].AcknowledgementNo=i;
    }
     
    int check4=0; int check6=0; //To study the cases of retransmission by manually causing data packet corruption
     
    //Sending and receiving the data packets
    for(i=0; i<6; i++){
        cout<<"\n\n Next Transmission";
        cout<<"\n Sending PacketNo "<<i<<" from Sender";
        S[i].Sent=1;
        cout<<"\n Propagation Delay";
        if(i==4 && check4==0){
            R[i].Received=0;
            check4=1; i--;
            cout<<"\n Data PacketNo "<<i<<" not received.";
        }
        else{
            R[i].Received=1;
            R[i].AcknowledgementSent=1;
            cout<<"\n Sending AcknowledgementNo "<<i+1<<" to Sender";
            cout<<"\n Propagation Delay";
            if(i==5 && check6==0){
                S[i].Acknowledged=0;
                check6=1;i--;
                cout<<"\n Acknowledgement for DataPacketNo"<< i <<" not received";
            }
            else{
                S[i]. Acknowledged=1;
                cout<<"\n Acknowledgement for PacketNo "<<i<<" Received";
                 
            }
             
    }}


       int w,i,f,frames[50];
 
    cout<<"Enter window size: ";
    cin>>w;
 
    cout<<"\nEnter number of frames to transmit: ";
    cin>>f;
 
    cout<<"\nEnter "<<f<<" frames: ";
 
    for(i=1;i<=f;i++)
        cin>>frames[i];
 
    cout<<"\nWith sliding window protocol the frames will be sent in the following manner (assuming no corruption of frames)\n\n";
    cout<<"After sending "<<w<<" frames at each stage sender waits for acknowledgement sent by the receiver\n\n";
 
    for(i=1;i<=f;i++)
    {
        if(i%w==0)
        {
            cout<<frames[i]<<"\n";
            cout<<"Acknowledgement of above frames sent is received by sender\n\n";
        }
        else
            cout<<frames[i]<<" ";
    }
 
    if(f%w!=0)
        cout<<"\nAcknowledgement of above frames sent is received by sender\n";
    return 0;
}