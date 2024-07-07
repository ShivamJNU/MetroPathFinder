#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_update

using namespace std;
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, greater_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

// We can use greater<int> in the place of less<int> to store the elements in decreasing order
// We can even use less_equal<int> or greater_equal<int> in the place of less<int> to store elements like a multiset.
// (The functionality of order of key also changes in these cases.)

#define REP(j, a, b) for (int j = a; j < b; j++)
#define print(x) cout << x << endl
#define yep cout << "YES" << endl
#define nope cout << "NO" << endl

#define MOD 1000000007

#define ll long long
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second

#define int long long
#define sortall(x) sort(x.begin(), x.end())

// Two criterias: Shortest route and Minimum Time

map<string, int> m1;
map<int, string> m2;

vector<vector<int>> graphDist;
vector<vector<int>> graphTime(300);

// Assigning Nodes:

void assignMagentaLine()
{

    int i = 0;
    m1["Janakpuri West"] = i;
    m2[i] = "Janakpuri West";
    i++;

    m1["Dabri Mor-Janakpuri South"] = i;
    m2[i] = "Dabri Mor-Janakpuri South";
    i++;

    m1["Dashrathpuri"] = i;
    m2[i] = "Dashrathpuri";
    i++;

    m1["Palam"] = i;
    m2[i] = "Palam";
    i++;

    m1["Sadar Bazar Cantonment"] = i;
    m2[i] = "Sadar Bazar Cantonment";
    i++;

    m1["Terminal-1 IGI Airport"] = i;
    m2[i] = "Terminal-1 IGI Airport";
    i++;

    m1["Shankar Vihar"] = i;
    m2[i] = "Shankar Vihar";
    i++;

    m1["Vasant Vihar"] = i;
    m2[i] = "Vasant Vihar";
    i++;

    m1["Munirka"] = i;
    m2[i] = "Munirka";
    i++;

    m1["RK Puram"] = i;
    m2[i] = "RK Puram";
    i++;

    m1["IIT Delhi"] = i;
    m2[i] = "IIT Delhi";
    i++;

    m1["Hauz Khas"] = i;
    m2[i] = "Hauz Khas";
    i++;

    m1["Panchsheel Park"] = i;
    m2[i] = "Panchsheel Park";
    i++;

    m1["Chirag Delhi"] = i;
    m2[i] = "Chirag Delhi";
    i++;

    m1["Greater Kailash"] = i;
    m2[i] = "Greater Kailash";
    i++;

    m1["Nehru Enclave"] = i;
    m2[i] = "Nehru Enclave";
    i++;

    m1["Kalkaji Mandir"] = i;
    m2[i] = "Kalkaji Mandir";
    i++;

    m1["Okhla NSIC"] = i;
    m2[i] = "Okhla NSIC";
    i++;

    m1["Sukhdev Vihar"] = i;
    m2[i] = "Sukhdev Vihar";
    i++;

    m1["Jamia Millia Islamia"] = i;
    m2[i] = "Jamia Millia Islamia";
    i++;

    m1["Okhla Vihar"] = i;
    m2[i] = "Okhla Vihar";
    i++;

    m1["Jasola Vihar Shaheen Bagh"] = i;
    m2[i] = "Jasola Vihar Shaheen Bagh";
    i++;

    m1["Kalindi Kunj"] = i;
    m2[i] = "Kalindi Kunj";
    i++;

    m1["Okhla Bird Sanctuary"] = i;
    m2[i] = "Okhla Bird Sanctuary";
    i++;

    m1["Botanical Garden"] = i;
    m2[i] = "Botanical Garden";
    i++;

    // i will have value equal to 25 here (0-24 covered)
}

void assignYellowLine()
{
    int i = 25;
    m1["Samaypur Badli"] = i;
    m2[i] = "Samaypur Badli";
    i++;

    m1["Rohini Sector-18,19"] = i;
    m2[i] = "Rohini Sector-18,19";
    i++;

    m1["Haiderpur Badli Mor"] = i;
    m2[i] = "Haiderpur Badli Mor";
    i++;

    m1["JahangirPuri"] = i;
    m2[i] = "JahangirPuri";
    i++;

    m1["Adarsh Nagar"] = i;
    m2[i] = "Adarsh Nagar";
    i++;

    m1["Azadpur"] = i;
    m2[i] = "Azadpur";
    i++;

    m1["Model Town"] = i;
    m2[i] = "Model Town";
    i++;

    m1["Guru Teg Bahadur Nagar"] = i;
    m2[i] = "Guru Teg Bahadur Nagar";
    i++;

    m1["Vishwavidyalaya"] = i;
    m2[i] = "Vishwavidyalaya";
    i++;

    m1["Vidhan Sabha"] = i;
    m2[i] = "Vidhan Sabha";
    i++;

    m1["Civil Lines"] = i;
    m2[i] = "Civil Lines";
    i++;

    m1["Kashmere Gate"] = i;
    m2[i] = "Kashmere Gate";
    i++;

    m1["Chandni Chowk"] = i;
    m2[i] = "Chandni Chowk";
    i++;

    m1["Chawri Bazar"] = i;
    m2[i] = "Chawri Bazar";
    i++;

    m1["New Delhi"] = i;
    m2[i] = "New Delhi";
    i++;

    m1["Rajiv Chowk"] = i;
    m2[i] = "Rajiv Chowk";
    i++;

    m1["Patel Chowk"] = i;
    m2[i] = "Patel Chowk";
    i++;

    m1["Central Secretariat"] = i;
    m2[i] = "Central Secretariat";
    i++;

    m1["Udyog Bhawan"] = i;
    m2[i] = "Udyog Bhawan";
    i++;

    m1["Lok Kalyan Marg"] = i;
    m2[i] = "Lok Kalyan Marg";
    i++;

    m1["Jor Bagh"] = i;
    m2[i] = "Jor Bagh";
    i++;

    m1["Dilli Haat-INA"] = i;
    m2[i] = "Dilli Haat-INA";
    i++;

    m1["AIIMS"] = i;
    m2[i] = "AIIMS";
    i++;

    m1["Green Park"] = i;
    m2[i] = "Green Park";
    i++;

    m1["Hauz Khas"] = i;
    m2[i] = "Hauz Khas";
    i++;

    m1["Malviya Nagar"] = i;
    m2[i] = "Malviya Nagar";
    i++;

    m1["Saket"] = i;
    m2[i] = "Saket";
    i++;

    m1["Qutub Minar"] = i;
    m2[i] = "Qutub Minar";
    i++;

    m1["Chhatarpur"] = i;
    m2[i] = "Chhatarpur";
    i++;

    m1["Sultanpur"] = i;
    m2[i] = "Sultanpur";
    i++;

    m1["Ghitorni"] = i;
    m2[i] = "Ghitorni";
    i++;

    m1["Arjan Garh"] = i;
    m2[i] = "Arjan Garh";
    i++;

    m1["Guru Dronacharya"] = i;
    m2[i] = "Guru Dronacharya";
    i++;

    m1["Sikanderpur"] = i;
    m2[i] = "Sikanderpur";
    i++;

    m1["M.G. Road"] = i;
    m2[i] = "M.G. Road";
    i++;

    m1["IFFCO Chowk"] = i;
    m2[i] = "IFFCO Chowk";
    i++;

    m1["Millennium City Centre Gurugram"] = i;
    m2[i] = "Millennium City Centre Gurugram";
    i++;

    // 37 stations covered: (25-61)

    // i equal 62 here (25+37 = 62 stations covered (0-61))
}

void assignRedLine()
{
    int i = 62;

    m1["Shaheed Sthal (New Bus Adda)"] = i;
    m2[i] = "Shaheed Sthal (New Bus Adda)";
    i++;

    m1["Hindon River"] = i;
    m2[i] = "Hindon River";
    i++;

    m1["Arthala"] = i;
    m2[i] = "Arthala";
    i++;

    m1["Mohan Nagar"] = i;
    m2[i] = "Mohan Nagar";
    i++;

    m1["Shyam Park"] = i;
    m2[i] = "Shyam Park";
    i++;

    m1["Major Mohit Sharma Rajendra Nagar"] = i;
    m2[i] = "Major Mohit Sharma Rajendra Nagar";
    i++;

    m1["Raj Bagh"] = i;
    m2[i] = "Raj Bagh";
    i++;

    m1["Shaheed Nagar"] = i;
    m2[i] = "Shaheed Nagar";
    i++;

    m1["Dilshad Garden"] = i;
    m2[i] = "Dilshad Garden";
    i++;

    m1["Jhilmil"] = i;
    m2[i] = "Jhilmil";
    i++;

    m1["Mansarovar Park"] = i;
    m2[i] = "Mansarovar Park";
    i++;

    m1["Shahdara"] = i;
    m2[i] = "Shahdara";
    i++;

    m1["Welcome"] = i;
    m2[i] = "Welcome";
    i++;

    m1["Seelampur"] = i;
    m2[i] = "Seelampur";
    i++;

    m1["Shastri Park"] = i;
    m2[i] = "Shastri Park";
    i++;

    m1["Kashmere Gate"] = i;
    m2[i] = "Kashmere Gate";
    i++;

    m1["Tis Hazari"] = i;
    m2[i] = "Tis Hazari";
    i++;

    m1["Pulbangash"] = i;
    m2[i] = "Pulbangash";
    i++;

    m1["Pratap Nagar"] = i;
    m2[i] = "Pratap Nagar";
    i++;

    m1["Shastri Nagar"] = i;
    m2[i] = "Shastri Nagar";
    i++;

    m1["Inderlok"] = i;
    m2[i] = "Inderlok";
    i++;

    m1["Kanhaiya Nagar"] = i;
    m2[i] = "Kanhaiya Nagar";
    i++;

    m1["Keshav Puram"] = i;
    m2[i] = "Keshav Puram";
    i++;

    m1["Netaji Subhash Place"] = i;
    m2[i] = "Netaji Subhash Place";
    i++;

    m1["Kohat Enclave"] = i;
    m2[i] = "Kohat Enclave";
    i++;

    m1["Pitampura"] = i;
    m2[i] = "Pitampura";
    i++;

    m1["Rohini East"] = i;
    m2[i] = "Rohini East";
    i++;

    m1["Rohini West"] = i;
    m2[i] = "Rohini West";
    i++;

    m1["Rithala"] = i;
    m2[i] = "Rithala";
    i++;

    // i equal 91 here (25+37+29 = 91 stations covered (0-90))
}

void assignPinkLine()
{

    int i = 91;
    m1["Majlis Park"] = i;
    m2[i] = "Majlis Park";
    i++;

    m1["Azadpur"] = i;
    m2[i] = "Azadpur";
    i++;

    m1["Shalimar Bagh"] = i;
    m2[i] = "Shalimar Bagh";
    i++;

    m1["Netaji Subhash Place"] = i;
    m2[i] = "Netaji Subhash Place";
    i++;

    m1["Shakurpur"] = i;
    m2[i] = "Shakurpur";
    i++;

    m1["Punjabi Bagh West"] = i;
    m2[i] = "Punjabi Bagh West";
    i++;

    m1["ESI-Basaidarapur"] = i;
    m2[i] = "ESI-Basaidarapur";
    i++;

    m1["Rajouri Garden"] = i;
    m2[i] = "Rajouri Garden";
    i++;

    m1["Mayapuri"] = i;
    m2[i] = "Mayapuri";
    i++;

    m1["Naraina Vihar"] = i;
    m2[i] = "Naraina Vihar";
    i++;

    m1["Delhi Cantt"] = i;
    m2[i] = "Delhi Cantt";
    i++;

    m1["Durgabai Deshmukh South Campus"] = i;
    m2[i] = "Durgabai Deshmukh South Campus";
    i++;

    m1["Sir M.Vishweshwaraiah Moti Bagh"] = i;
    m2[i] = "Sir M.Vishweshwaraiah Moti Bagh";
    i++;

    m1["Bhikaji Cama Place"] = i;
    m2[i] = "Bhikaji Cama Place";
    i++;

    m1["Sarojini Nagar"] = i;
    m2[i] = "Sarojini Nagar";
    i++;

    m1["Dilli Haat-INA"] = i;
    m2[i] = "Dilli Haat-INA";
    i++;

    m1["South Extension"] = i;
    m2[i] = "South Extension";
    i++;

    m1["Lajpat Nagar"] = i;
    m2[i] = "Lajpat Nagar";
    i++;

    m1["Vinobapuri"] = i;
    m2[i] = "Vinobapuri";
    i++;

    m1["Ashram"] = i;
    m2[i] = "Ashram";
    i++;

    m1["Sarai Kale Khan Nizamuddin"] = i;
    m2[i] = "Sarai Kale Khan Nizamuddin";
    i++;

    m1["Mayur Vihar-1"] = i;
    m2[i] = "Mayur Vihar-1";
    i++;

    m1["Mayur Vihar Pocket-1"] = i;
    m2[i] = "Mayur Vihar Pocket-1";
    i++;

    m1["Trilokpuri-Sanjay Lake"] = i;
    m2[i] = "Trilokpuri-Sanjay Lake";
    i++;

    m1["East Vinod Nagar-Mayur Vihar-II"] = i;
    m2[i] = "East Vinod Nagar-Mayur Vihar-II";
    i++;

    m1["Mandawali West Vinod Nagar"] = i;
    m2[i] = "Mandawali West Vinod Nagar";
    i++;

    m1["IP Extension"] = i;
    m2[i] = "IP Extension";
    i++;

    m1["Anand Vihar I.S.B.T."] = i;
    m2[i] = "Anand Vihar I.S.B.T.";
    i++;

    m1["Karkarduma"] = i;
    m2[i] = "Karkarduma";
    i++;

    m1["Karkarduma Court"] = i;
    m2[i] = "Karkarduma Court";
    i++;

    m1["Krishna Nagar"] = i;
    m2[i] = "Krishna Nagar";
    i++;

    m1["East Azad Nagar"] = i;
    m2[i] = "East Azad Nagar";
    i++;

    m1["Welcome"] = i;
    m2[i] = "Welcome";
    i++;

    m1["Jafrabad"] = i;
    m2[i] = "Jafrabad";
    i++;

    m1["Maujpur-Babarpur"] = i;
    m2[i] = "Maujpur-Babarpur";
    i++;

    m1["Gokulpuri"] = i;
    m2[i] = "Gokulpuri";
    i++;

    m1["Johri Enclave"] = i;
    m2[i] = "Johri Enclave";
    i++;

    m1["Shiv Vihar"] = i;
    m2[i] = "Shiv Vihar";
    i++;

    // i equal 129 here (25+37+29+38 = 129 stations covered (0-128))
}

void assignGreenLine()
{
    int i = 129;

    m1["Kirti Nagar"] = i;
    m2[i] = "Kirti Nagar";
    i++;

    m1["Satguru Ram Singh Marg"] = i;
    m2[i] = "Satguru Ram Singh Marg";
    i++;

    m1["Inderlok"] = i;
    m2[i] = "Inderlok";
    i++;

    m1["Ashok Park Main"] = i;
    m2[i] = "Ashok Park Main";
    i++;

    m1["Punjabi Bagh"] = i;
    m2[i] = "Punjabi Bagh";
    i++;

    m1["Punjabi Bagh West"] = i;
    m2[i] = "Punjabi Bagh West";
    i++;

    m1["Shivaji Park"] = i;
    m2[i] = "Shivaji Park";
    i++;

    m1["Madipur"] = i;
    m2[i] = "Madipur";
    i++;

    m1["Paschim Vihar East"] = i;
    m2[i] = "Paschim Vihar East";
    i++;

    m1["Paschim Vihar West"] = i;
    m2[i] = "Paschim Vihar West";
    i++;

    m1["Peeragarhi"] = i;
    m2[i] = "Peeragarhi";
    i++;

    m1["Udyog Nagar"] = i;
    m2[i] = "Udyog Nagar";
    i++;

    m1["Maharaja Surajmal Stadium"] = i;
    m2[i] = "Maharaja Surajmal Stadium";
    i++;

    m1["Nangloi"] = i;
    m2[i] = "Nangloi";
    i++;

    m1["Nangloi Railway Station"] = i;
    m2[i] = "Nangloi Railway Station";
    i++;

    m1["Rajdhani Park"] = i;
    m2[i] = "Rajdhani Park";
    i++;

    m1["Mundka"] = i;
    m2[i] = "Mundka";
    i++;

    m1["Mundka Industrial Area (MIA)"] = i;
    m2[i] = "Mundka Industrial Area (MIA)";
    i++;

    m1["Ghevra Metro Station"] = i;
    m2[i] = "Ghevra Metro Station";
    i++;

    m1["Tikri Kalan"] = i;
    m2[i] = "Tikri Kalan";
    i++;

    m1["Tikri Border"] = i;
    m2[i] = "Tikri Border";
    i++;

    m1["Pandit Shree Ram Sharma"] = i;
    m2[i] = "Pandit Shree Ram Sharma";
    i++;

    m1["Bahadurgarh City"] = i;
    m2[i] = "Bahadurgarh City";
    i++;

    m1["Brig. Hoshiar Singh"] = i;
    m2[i] = "Brig. Hoshiar Singh";
    i++;

    // i equal 153 here (25+37+29+38+24 = 153 stations covered (0-152))
}

void assignVioletLine()
{
    int i = 153;

    m1["Kashmere Gate"] = i;
    m2[i] = "Kashmere Gate";
    i++;

    m1["Lal Quila"] = i;
    m2[i] = "Lal Quila";
    i++;

    m1["Jama Masjid"] = i;
    m2[i] = "Jama Masjid";
    i++;

    m1["Delhi Gate"] = i;
    m2[i] = "Delhi Gate";
    i++;

    m1["ITO"] = i;
    m2[i] = "ITO";
    i++;

    m1["Mandi House"] = i;
    m2[i] = "Mandi House";
    i++;

    m1["Janpath"] = i;
    m2[i] = "Janpath";
    i++;

    m1["Central Secretariat"] = i;
    m2[i] = "Central Secretariat";
    i++;

    m1["Khan Market"] = i;
    m2[i] = "Khan Market";
    i++;

    m1["JLN Stadium"] = i;
    m2[i] = "JLN Stadium";
    i++;

    m1["Jangpura"] = i;
    m2[i] = "Jangpura";
    i++;

    m1["Lajpat Nagar"] = i;
    m2[i] = "Lajpat Nagar";
    i++;

    m1["Moolchand"] = i;
    m2[i] = "Moolchand";
    i++;

    m1["Kailash Colony"] = i;
    m2[i] = "Kailash Colony";
    i++;

    m1["Nehru Place"] = i;
    m2[i] = "Nehru Place";
    i++;

    m1["Kalkaji Mandir"] = i;
    m2[i] = "Kalkaji Mandir";
    i++;

    m1["Govind Puri"] = i;
    m2[i] = "Govind Puri";
    i++;

    m1["Harkesh Nagar Okhla"] = i;
    m2[i] = "Harkesh Nagar Okhla";
    i++;

    m1["Jasola Apollo"] = i;
    m2[i] = "Jasola Apollo";
    i++;

    m1["Sarita Vihar"] = i;
    m2[i] = "Sarita Vihar";
    i++;

    m1["Mohan Estate"] = i;
    m2[i] = "Mohan Estate";
    i++;

    m1["Tughlakabad Station"] = i;
    m2[i] = "Tughlakabad Station";
    i++;

    m1["Badarpur Border"] = i;
    m2[i] = "Badarpur Border";
    i++;

    m1["Sarai"] = i;
    m2[i] = "Sarai";
    i++;

    m1["NHPC Chowk"] = i;
    m2[i] = "NHPC Chowk";
    i++;

    m1["Mewala Maharajpur"] = i;
    m2[i] = "Mewala Maharajpur";
    i++;

    m1["Sector-28"] = i;
    m2[i] = "Sector-28";
    i++;

    m1["Badkal Mor"] = i;
    m2[i] = "Badkal Mor";
    i++;

    m1["Old Faridabad"] = i;
    m2[i] = "Old Faridabad";
    i++;

    m1["Neelam Chowk Ajronda"] = i;
    m2[i] = "Neelam Chowk Ajronda";
    i++;

    m1["Bata Chowk"] = i;
    m2[i] = "Bata Chowk";
    i++;

    m1["Escorts Mujesar"] = i;
    m2[i] = "Escorts Mujesar";
    i++;

    m1["Sant Surdas (Sihi)"] = i;
    m2[i] = "Sant Surdas (Sihi)";
    i++;

    m1["Raja Nahar Singh (Ballabhgarh)"] = i;
    m2[i] = "Raja Nahar Singh (Ballabhgarh)";
    i++;

    // i equal 187 here (25+37+29+38+24+34 = 187 stations covered (0-186))
}

void assignBlueLine()
{
    int i = 187;
    m1["Noida Electronic City"] = i;
    m2[i] = "Noida Electronic City";
    i++;

    m1["Sec-62 Noida"] = i;
    m2[i] = "Sec-62 Noida";
    i++;

    m1["Sec-59 Noida"] = i;
    m2[i] = "Sec-59 Noida";
    i++;

    m1["Sec-61 Noida"] = i;
    m2[i] = "Sec-61 Noida";
    i++;

    m1["Sec-52 Noida"] = i;
    m2[i] = "Sec-52 Noida";
    i++;

    m1["Sec-34 Noida"] = i;
    m2[i] = "Sec-34 Noida";
    i++;

    m1["Noida City Centre"] = i;
    m2[i] = "Noida City Centre";
    i++;

    m1["Golf Course"] = i;
    m2[i] = "Golf Course";
    i++;

    m1["Botanical Garden"] = i;
    m2[i] = "Botanical Garden";
    i++;

    m1["Noida Sec-18"] = i;
    m2[i] = "Noida Sec-18";
    i++;

    m1["Noida Sec-16"] = i;
    m2[i] = "Noida Sec-16";
    i++;

    m1["Noida Sec-15"] = i;
    m2[i] = "Noida Sec-15";
    i++;

    m1["New Ashok Nagar"] = i;
    m2[i] = "New Ashok Nagar";
    i++;

    m1["Mayur Vihar Extension"] = i;
    m2[i] = "Mayur Vihar Extension";
    i++;

    m1["Mayur Vihar-1"] = i;
    m2[i] = "Mayur Vihar-1";
    i++;

    m1["Akshardham"] = i;
    m2[i] = "Akshardham";
    i++;

    m1["Yamuna Bank"] = i;
    m2[i] = "Yamuna Bank";
    i++;

    m1["Indraprastha"] = i;
    m2[i] = "Indraprastha";
    i++;

    m1["Supreme Court"] = i;
    m2[i] = "Supreme Court";
    i++;

    m1["Mandi House"] = i;
    m2[i] = "Mandi House";
    i++;

    m1["Barakhamba Road"] = i;
    m2[i] = "Barakhamba Road";
    i++;

    m1["Rajiv Chowk"] = i;
    m2[i] = "Rajiv Chowk";
    i++;

    m1["Ramakrishna Ashram Marg"] = i;
    m2[i] = "Ramakrishna Ashram Marg";
    i++;

    m1["Jhandewalan"] = i;
    m2[i] = "Jhandewalan";
    i++;

    m1["Karol Bagh"] = i;
    m2[i] = "Karol Bagh";
    i++;

    m1["Rajendra Place"] = i;
    m2[i] = "Rajendra Place";
    i++;

    m1["Patel Nagar"] = i;
    m2[i] = "Patel Nagar";
    i++;

    m1["Shadipur"] = i;
    m2[i] = "Shadipur";
    i++;

    m1["Kirti Nagar"] = i;
    m2[i] = "Kirti Nagar";
    i++;

    m1["Moti Nagar"] = i;
    m2[i] = "Moti Nagar";
    i++;

    m1["Ramesh Nagar"] = i;
    m2[i] = "Ramesh Nagar";
    i++;

    m1["Rajouri Garden"] = i;
    m2[i] = "Rajouri Garden";
    i++;

    m1["Tagore Garden"] = i;
    m2[i] = "Tagore Garden";
    i++;

    m1["Subhash Nagar"] = i;
    m2[i] = "Subhash Nagar";
    i++;

    m1["Tilak Nagar"] = i;
    m2[i] = "Tilak Nagar";
    i++;

    m1["Janakpuri East"] = i;
    m2[i] = "Janakpuri East";
    i++;

    m1["Janakpuri West"] = i;
    m2[i] = "Janakpuri West";
    i++;

    m1["Uttam Nagar East"] = i;
    m2[i] = "Uttam Nagar East";
    i++;

    m1["Uttam Nagar West"] = i;
    m2[i] = "Uttam Nagar West";
    i++;

    m1["Nawada"] = i;
    m2[i] = "Nawada";
    i++;

    m1["Dwarka Mor"] = i;
    m2[i] = "Dwarka Mor";
    i++;

    m1["Dwarka"] = i;
    m2[i] = "Dwarka";
    i++;

    m1["Dwarka Sector-14"] = i;
    m2[i] = "Dwarka Sector-14";
    i++;

    m1["Dwarka Sector-13"] = i;
    m2[i] = "Dwarka Sector-13";
    i++;

    m1["Dwarka Sector-12"] = i;
    m2[i] = "Dwarka Sector-12";
    i++;

    m1["Dwarka Sector-11"] = i;
    m2[i] = "Dwarka Sector-11";
    i++;

    m1["Dwarka Sector-10"] = i;
    m2[i] = "Dwarka Sector-10";
    i++;

    m1["Dwarka Sector-9"] = i;
    m2[i] = "Dwarka Sector-9";
    i++;

    m1["Dwarka Sector-8"] = i;
    m2[i] = "Dwarka Sector-8";
    i++;

    m1["Dwarka Sector-21"] = i;
    m2[i] = "Dwarka Sector-21";
    i++;

    // i equal 237 here (25+37+29+38+24+34+50 = 237 stations covered (0-236))
}

void assignBlueLineBranch()
{

    int i = 237;
    m1["Yamuna Bank"] = i;
    m2[i] = "Yamuna Bank";
    i++;

    m1["Laxmi Nagar"] = i;
    m2[i] = "Laxmi Nagar";
    i++;

    m1["Nirman Vihar"] = i;
    m2[i] = "Nirman Vihar";
    i++;

    m1["Preet Vihar"] = i;
    m2[i] = "Preet Vihar";
    i++;

    m1["Karkarduma"] = i;
    m2[i] = "Karkarduma";
    i++;

    m1["Anand Vihar I.S.B.T."] = i;
    m2[i] = "Anand Vihar I.S.B.T.";
    i++;

    m1["Kaushambi"] = i;
    m2[i] = "Kaushambi";
    i++;

    m1["Vaishali"] = i;
    m2[i] = "Vaishali";
    i++;

    // i equal 245 here (25+37+29+38+24+34+50+8 = 245 stations covered (0-244))
}

// Assigning Distances:
void internalGraphMagentaLine()
{
    graphDist.push_back({m1["Janakpuri West"], m1["Dabri Mor-Janakpuri South"], 1});

    graphDist.push_back({m1["Dabri Mor-Janakpuri South"], m1["Janakpuri West"], 1});

    graphDist.push_back({m1["Dabri Mor-Janakpuri South"], m1["Dashrathpuri"], 1});

    graphDist.push_back({m1["Dashrathpuri"], m1["Dabri Mor-Janakpuri South"], 1});

    graphDist.push_back({m1["Dashrathpuri"], m1["Palam"], 1});

    graphDist.push_back({m1["Palam"], m1["Dashrathpuri"], 1});

    graphDist.push_back({m1["Palam"], m1["Sadar Bazar Cantonment"], 1});

    graphDist.push_back({m1["Sadar Bazar Cantonment"], m1["Palam"], 1});

    graphDist.push_back({m1["Sadar Bazar Cantonment"], m1["Terminal-1 IGI Airport"], 1});

    graphDist.push_back({m1["Terminal-1 IGI Airport"], m1["Sadar Bazar Cantonment"], 1});

    graphDist.push_back({m1["Terminal-1 IGI Airport"], m1["Shankar Vihar"], 1});

    graphDist.push_back({m1["Shankar Vihar"], m1["Terminal-1 IGI Airport"], 1});

    graphDist.push_back({m1["Shankar Vihar"], m1["Vasant Vihar"], 1});

    graphDist.push_back({m1["Vasant Vihar"], m1["Shankar Vihar"], 1});

    graphDist.push_back({m1["Vasant Vihar"], m1["Munirka"], 1});

    graphDist.push_back({m1["Munirka"], m1["Vasant Vihar"], 1});

    graphDist.push_back({m1["Munirka"], m1["RK Puram"], 1});

    graphDist.push_back({m1["RK Puram"], m1["Munirka"], 1});

    graphDist.push_back({m1["RK Puram"], m1["IIT Delhi"], 1});

    graphDist.push_back({m1["IIT Delhi"], m1["RK Puram"], 1});

    graphDist.push_back({m1["IIT Delhi"], m1["Hauz Khas"], 1});

    graphDist.push_back({m1["Hauz Khas"], m1["IIT Delhi"], 1});

    graphDist.push_back({m1["Hauz Khas"], m1["Panchsheel Park"], 1});

    graphDist.push_back({m1["Panchsheel Park"], m1["Hauz Khas"], 1});

    graphDist.push_back({m1["Panchsheel Park"], m1["Chirag Delhi"], 1});

    graphDist.push_back({m1["Chirag Delhi"], m1["Panchsheel Park"], 1});

    graphDist.push_back({m1["Chirag Delhi"], m1["Greater Kailash"], 1});

    graphDist.push_back({m1["Greater Kailash"], m1["Chirag Delhi"], 1});

    graphDist.push_back({m1["Greater Kailash"], m1["Nehru Enclave"], 1});

    graphDist.push_back({m1["Nehru Enclave"], m1["Greater Kailash"], 1});

    graphDist.push_back({m1["Nehru Enclave"], m1["Kalkaji Mandir"], 1});

    graphDist.push_back({m1["Kalkaji Mandir"], m1["Nehru Enclave"], 1});

    graphDist.push_back({m1["Kalkaji Mandir"], m1["Okhla NSIC"], 1});

    graphDist.push_back({m1["Okhla NSIC"], m1["Kalkaji Mandir"], 1});

    graphDist.push_back({m1["Okhla NSIC"], m1["Sukhdev Vihar"], 1});

    graphDist.push_back({m1["Sukhdev Vihar"], m1["Okhla NSIC"], 1});

    graphDist.push_back({m1["Sukhdev Vihar"], m1["Jamia Millia Islamia"], 1});

    graphDist.push_back({m1["Jamia Millia Islamia"], m1["Sukhdev Vihar"], 1});

    graphDist.push_back({m1["Jamia Millia Islamia"], m1["Okhla Vihar"], 1});

    graphDist.push_back({m1["Okhla Vihar"], m1["Jamia Millia Islamia"], 1});

    graphDist.push_back({m1["Okhla Vihar"], m1["Jasola Vihar Shaheen Bagh"], 1});

    graphDist.push_back({m1["Jasola Vihar Shaheen Bagh"], m1["Okhla Vihar"], 1});

    graphDist.push_back({m1["Jasola Vihar Shaheen Bagh"], m1["Kalindi Kunj"], 1});

    graphDist.push_back({m1["Kalindi Kunj"], m1["Jasola Vihar Shaheen Bagh"], 1});

    graphDist.push_back({m1["Kalindi Kunj"], m1["Okhla Bird Sanctuary"], 1});

    graphDist.push_back({m1["Okhla Bird Sanctuary"], m1["Kalindi Kunj"], 1});

    graphDist.push_back({m1["Okhla Bird Sanctuary"], m1["Botanical Garden"], 1});

    graphDist.push_back({m1["Botanical Garden"], m1["Okhla Bird Sanctuary"], 1});
}

void internalGraphYellowLine()
{
    graphDist.push_back({m1["Samaypur Badli"], m1["Rohini Sector-18,19"], 1});

    graphDist.push_back({m1["Rohini Sector-18,19"], m1["Samaypur Badli"], 1});

    graphDist.push_back({m1["Rohini Sector-18,19"], m1["Haiderpur Badli Mor"], 1});

    graphDist.push_back({m1["Haiderpur Badli Mor"], m1["Rohini Sector-18,19"], 1});

    graphDist.push_back({m1["Haiderpur Badli Mor"], m1["JahangirPuri"], 1});

    graphDist.push_back({m1["JahangirPuri"], m1["Haiderpur Badli Mor"], 1});

    graphDist.push_back({m1["JahangirPuri"], m1["Adarsh Nagar"], 1});

    graphDist.push_back({m1["Adarsh Nagar"], m1["JahangirPuri"], 1});

    graphDist.push_back({m1["Adarsh Nagar"], m1["Azadpur"], 1});

    graphDist.push_back({m1["Azadpur"], m1["Adarsh Nagar"], 1});

    graphDist.push_back({m1["Azadpur"], m1["Model Town"], 1});

    graphDist.push_back({m1["Model Town"], m1["Azadpur"], 1});

    graphDist.push_back({m1["Model Town"], m1["Guru Teg Bahadur Nagar"], 1});

    graphDist.push_back({m1["Guru Teg Bahadur Nagar"], m1["Model Town"], 1});

    graphDist.push_back({m1["Guru Teg Bahadur Nagar"], m1["Vishwavidyalaya"], 1});

    graphDist.push_back({m1["Vishwavidyalaya"], m1["Guru Teg Bahadur Nagar"], 1});

    graphDist.push_back({m1["Vishwavidyalaya"], m1["Vidhan Sabha"], 1});

    graphDist.push_back({m1["Vidhan Sabha"], m1["Vishwavidyalaya"], 1});

    graphDist.push_back({m1["Vidhan Sabha"], m1["Civil Lines"], 1});

    graphDist.push_back({m1["Civil Lines"], m1["Vidhan Sabha"], 1});

    graphDist.push_back({m1["Civil Lines"], m1["Kashmere Gate"], 1});

    graphDist.push_back({m1["Kashmere Gate"], m1["Civil Lines"], 1});

    graphDist.push_back({m1["Kashmere Gate"], m1["Chandni Chowk"], 1});

    graphDist.push_back({m1["Chandni Chowk"], m1["Kashmere Gate"], 1});

    graphDist.push_back({m1["Chandni Chowk"], m1["Chawri Bazar"], 1});

    graphDist.push_back({m1["Chawri Bazar"], m1["Chandni Chowk"], 1});

    graphDist.push_back({m1["Chawri Bazar"], m1["New Delhi"], 1});

    graphDist.push_back({m1["New Delhi"], m1["Chawri Bazar"], 1});

    graphDist.push_back({m1["New Delhi"], m1["Rajiv Chowk"], 1});

    graphDist.push_back({m1["Rajiv Chowk"], m1["New Delhi"], 1});

    graphDist.push_back({m1["Rajiv Chowk"], m1["Patel Chowk"], 1});

    graphDist.push_back({m1["Patel Chowk"], m1["Rajiv Chowk"], 1});

    graphDist.push_back({m1["Patel Chowk"], m1["Central Secretariat"], 1});

    graphDist.push_back({m1["Central Secretariat"], m1["Patel Chowk"], 1});

    graphDist.push_back({m1["Central Secretariat"], m1["Udyog Bhawan"], 1});

    graphDist.push_back({m1["Udyog Bhawan"], m1["Central Secretariat"], 1});

    graphDist.push_back({m1["Udyog Bhawan"], m1["Lok Kalyan Marg"], 1});

    graphDist.push_back({m1["Lok Kalyan Marg"], m1["Udyog Bhawan"], 1});

    graphDist.push_back({m1["Lok Kalyan Marg"], m1["Jor Bagh"], 1});

    graphDist.push_back({m1["Jor Bagh"], m1["Lok Kalyan Marg"], 1});

    graphDist.push_back({m1["Jor Bagh"], m1["Dilli Haat-INA"], 1});

    graphDist.push_back({m1["Dilli Haat-INA"], m1["Jor Bagh"], 1});

    graphDist.push_back({m1["Dilli Haat-INA"], m1["AIIMS"], 1});

    graphDist.push_back({m1["AIIMS"], m1["Dilli Haat-INA"], 1});

    graphDist.push_back({m1["AIIMS"], m1["Green Park"], 1});

    graphDist.push_back({m1["Green Park"], m1["AIIMS"], 1});

    graphDist.push_back({m1["Green Park"], m1["Hauz Khas"], 1});

    graphDist.push_back({m1["Hauz Khas"], m1["Green Park"], 1});

    graphDist.push_back({m1["Hauz Khas"], m1["Malviya Nagar"], 1});

    graphDist.push_back({m1["Malviya Nagar"], m1["Hauz Khas"], 1});

    graphDist.push_back({m1["Malviya Nagar"], m1["Saket"], 1});

    graphDist.push_back({m1["Saket"], m1["Malviya Nagar"], 1});

    graphDist.push_back({m1["Saket"], m1["Qutub Minar"], 1});

    graphDist.push_back({m1["Qutub Minar"], m1["Saket"], 1});

    graphDist.push_back({m1["Qutub Minar"], m1["Chhatarpur"], 1});

    graphDist.push_back({m1["Chhatarpur"], m1["Qutub Minar"], 1});

    graphDist.push_back({m1["Chhatarpur"], m1["Sultanpur"], 1});

    graphDist.push_back({m1["Sultanpur"], m1["Chhatarpur"], 1});

    graphDist.push_back({m1["Sultanpur"], m1["Ghitorni"], 1});

    graphDist.push_back({m1["Ghitorni"], m1["Sultanpur"], 1});

    graphDist.push_back({m1["Ghitorni"], m1["Arjan Garh"], 1});

    graphDist.push_back({m1["Arjan Garh"], m1["Ghitorni"], 1});

    graphDist.push_back({m1["Arjan Garh"], m1["Guru Dronacharya"], 1});

    graphDist.push_back({m1["Guru Dronacharya"], m1["Arjan Garh"], 1});

    graphDist.push_back({m1["Guru Dronacharya"], m1["Sikanderpur"], 1});

    graphDist.push_back({m1["Sikanderpur"], m1["Guru Dronacharya"], 1});

    graphDist.push_back({m1["Sikanderpur"], m1["M.G. Road"], 1});

    graphDist.push_back({m1["M.G. Road"], m1["Sikanderpur"], 1});

    graphDist.push_back({m1["M.G. Road"], m1["IFFCO Chowk"], 1});

    graphDist.push_back({m1["IFFCO Chowk"], m1["M.G. Road"], 1});

    graphDist.push_back({m1["IFFCO Chowk"], m1["Millennium City Centre Gurugram"], 1});

    graphDist.push_back({m1["Millennium City Centre Gurugram"], m1["IFFCO Chowk"], 1});
};

vector<int> shortestPath(int n, int src, int dst)
{

    vector<pair<int, int>> adj[n + 1];
    for (auto it : graphDist)
    {
        adj[it[0]].push_back({it[1], it[2]});
        adj[it[1]].push_back({it[0], it[2]});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> dist(n + 1, 1e9), parent(n + 1);
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }

    dist[src] = 0;

    pq.push({0, src});
    while (!pq.empty())
    {

        auto it = pq.top();
        pq.pop();
        int node = it.second;
        int dis = it.first;

        for (auto it : adj[node])
        {
            int adjNode = it.first;
            int edW = it.second;

            if (dis + edW < dist[adjNode])
            {
                dist[adjNode] = dis + edW;
                pq.push({dis + edW, adjNode});

                parent[adjNode] = node;
            }
        }
    }

    if (dist[dst] == 1e9)
    {
        return {-1};
    }

    vector<int> path;
    int node = dst;

    while (parent[node] != node)
    {
        path.push_back(node);
        node = parent[node];
    }
    path.push_back(src);

    reverse(path.begin(), path.end());
    return path;
}

signed main()
{

    // assignMagentaLine();
    // assignYellowLine();

    // internalGraphMagentaLine();
    // internalGraphYellowLine();

    // string src;
    // getline(cin, src);

    // string dst;
    // getline(cin, dst);

    // vector<int> path = shortestPath(300, m1[src], m1[dst]);

    // for (int i = 0; i < path.size(); i++)
    // {
    //     cout << m2[path[i]];

    //     if (i < path.size() - 1)
    //     {
    //         cout << "-->";
    //     }
    // }
    // cout << endl;

    return 0;
}
