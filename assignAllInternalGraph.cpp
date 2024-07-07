#include <bits/stdc++.h>
using namespace std;

// Assigning Distances:
void internalGraphMagentaLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphDist)
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

void internalGraphYellowLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphDist)
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

void internalGraphRedLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphDist)
{
    graphDist.push_back({m1["Shaheed Sthal (New Bus Adda)"], m1["Hindon River"], 1});

    graphDist.push_back({m1["Hindon River"], m1["Shaheed Sthal (New Bus Adda)"], 1});

    graphDist.push_back({m1["Hindon River"], m1["Arthala"], 1});

    graphDist.push_back({m1["Arthala"], m1["Hindon River"], 1});

    graphDist.push_back({m1["Arthala"], m1["Mohan Nagar"], 1});

    graphDist.push_back({m1["Mohan Nagar"], m1["Arthala"], 1});

    graphDist.push_back({m1["Mohan Nagar"], m1["Shyam Park"], 1});

    graphDist.push_back({m1["Shyam Park"], m1["Mohan Nagar"], 1});

    graphDist.push_back({m1["Shyam Park"], m1["Major Mohit Sharma Rajendra Nagar"], 1});

    graphDist.push_back({m1["Major Mohit Sharma Rajendra Nagar"], m1["Shyam Park"], 1});

    graphDist.push_back({m1["Major Mohit Sharma Rajendra Nagar"], m1["Raj Bagh"], 1});

    graphDist.push_back({m1["Raj Bagh"], m1["Major Mohit Sharma Rajendra Nagar"], 1});

    graphDist.push_back({m1["Raj Bagh"], m1["Shaheed Nagar"], 1});

    graphDist.push_back({m1["Shaheed Nagar"], m1["Raj Bagh"], 1});

    graphDist.push_back({m1["Shaheed Nagar"], m1["Dilshad Garden"], 1});

    graphDist.push_back({m1["Dilshad Garden"], m1["Shaheed Nagar"], 1});

    graphDist.push_back({m1["Dilshad Garden"], m1["Jhilmil"], 1});

    graphDist.push_back({m1["Jhilmil"], m1["Dilshad Garden"], 1});

    graphDist.push_back({m1["Jhilmil"], m1["Mansarovar Park"], 1});

    graphDist.push_back({m1["Mansarovar Park"], m1["Jhilmil"], 1});

    graphDist.push_back({m1["Mansarovar Park"], m1["Shahdara"], 1});

    graphDist.push_back({m1["Shahdara"], m1["Mansarovar Park"], 1});

    graphDist.push_back({m1["Shahdara"], m1["Welcome"], 1});

    graphDist.push_back({m1["Welcome"], m1["Shahdara"], 1});

    graphDist.push_back({m1["Welcome"], m1["Seelampur"], 1});

    graphDist.push_back({m1["Seelampur"], m1["Welcome"], 1});

    graphDist.push_back({m1["Seelampur"], m1["Shastri Park"], 1});

    graphDist.push_back({m1["Shastri Park"], m1["Seelampur"], 1});

    graphDist.push_back({m1["Shastri Park"], m1["Kashmere Gate"], 1});

    graphDist.push_back({m1["Kashmere Gate"], m1["Shastri Park"], 1});

    graphDist.push_back({m1["Kashmere Gate"], m1["Tis Hazari"], 1});

    graphDist.push_back({m1["Tis Hazari"], m1["Kashmere Gate"], 1});

    graphDist.push_back({m1["Tis Hazari"], m1["Pulbangash"], 1});

    graphDist.push_back({m1["Pulbangash"], m1["Tis Hazari"], 1});

    graphDist.push_back({m1["Pulbangash"], m1["Pratap Nagar"], 1});

    graphDist.push_back({m1["Pratap Nagar"], m1["Pulbangash"], 1});

    graphDist.push_back({m1["Pratap Nagar"], m1["Shastri Nagar"], 1});

    graphDist.push_back({m1["Shastri Nagar"], m1["Pratap Nagar"], 1});

    graphDist.push_back({m1["Shastri Nagar"], m1["Inderlok"], 1});

    graphDist.push_back({m1["Inderlok"], m1["Shastri Nagar"], 1});

    graphDist.push_back({m1["Inderlok"], m1["Kanhaiya Nagar"], 1});

    graphDist.push_back({m1["Kanhaiya Nagar"], m1["Inderlok"], 1});

    graphDist.push_back({m1["Kanhaiya Nagar"], m1["Keshav Puram"], 1});

    graphDist.push_back({m1["Keshav Puram"], m1["Kanhaiya Nagar"], 1});

    graphDist.push_back({m1["Keshav Puram"], m1["Netaji Subhash Place"], 1});

    graphDist.push_back({m1["Netaji Subhash Place"], m1["Keshav Puram"], 1});

    graphDist.push_back({m1["Netaji Subhash Place"], m1["Kohat Enclave"], 1});

    graphDist.push_back({m1["Kohat Enclave"], m1["Netaji Subhash Place"], 1});

    graphDist.push_back({m1["Kohat Enclave"], m1["Pitampura"], 1});

    graphDist.push_back({m1["Pitampura"], m1["Kohat Enclave"], 1});

    graphDist.push_back({m1["Pitampura"], m1["Rohini East"], 1});

    graphDist.push_back({m1["Rohini East"], m1["Pitampura"], 1});

    graphDist.push_back({m1["Rohini East"], m1["Rohini West"], 1});

    graphDist.push_back({m1["Rohini West"], m1["Rohini East"], 1});

    graphDist.push_back({m1["Rohini West"], m1["Rithala"], 1});

    graphDist.push_back({m1["Rithala"], m1["Rohini West"], 1});
}

void internalGraphPinkLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphDist)
{
    graphDist.push_back({m1["Majlis Park"], m1["Azadpur"], 1});

    graphDist.push_back({m1["Azadpur"], m1["Majlis Park"], 1});

    graphDist.push_back({m1["Azadpur"], m1["Shalimar Bagh"], 1});

    graphDist.push_back({m1["Shalimar Bagh"], m1["Azadpur"], 1});

    graphDist.push_back({m1["Shalimar Bagh"], m1["Netaji Subhash Place"], 1});

    graphDist.push_back({m1["Netaji Subhash Place"], m1["Shalimar Bagh"], 1});

    graphDist.push_back({m1["Netaji Subhash Place"], m1["Shakurpur"], 1});

    graphDist.push_back({m1["Shakurpur"], m1["Netaji Subhash Place"], 1});

    graphDist.push_back({m1["Shakurpur"], m1["Punjabi Bagh West"], 1});

    graphDist.push_back({m1["Punjabi Bagh West"], m1["Shakurpur"], 1});

    graphDist.push_back({m1["Punjabi Bagh West"], m1["ESI-Basaidarapur"], 1});

    graphDist.push_back({m1["ESI-Basaidarapur"], m1["Punjabi Bagh West"], 1});

    graphDist.push_back({m1["ESI-Basaidarapur"], m1["Rajouri Garden"], 1});

    graphDist.push_back({m1["Rajouri Garden"], m1["ESI-Basaidarapur"], 1});

    graphDist.push_back({m1["Rajouri Garden"], m1["Mayapuri"], 1});

    graphDist.push_back({m1["Mayapuri"], m1["Rajouri Garden"], 1});

    graphDist.push_back({m1["Mayapuri"], m1["Naraina Vihar"], 1});

    graphDist.push_back({m1["Naraina Vihar"], m1["Mayapuri"], 1});

    graphDist.push_back({m1["Naraina Vihar"], m1["Delhi Cantt"], 1});

    graphDist.push_back({m1["Delhi Cantt"], m1["Naraina Vihar"], 1});

    graphDist.push_back({m1["Delhi Cantt"], m1["Durgabai Deshmukh South Campus"], 1});

    graphDist.push_back({m1["Durgabai Deshmukh South Campus"], m1["Delhi Cantt"], 1});

    graphDist.push_back({m1["Durgabai Deshmukh South Campus"], m1["Sir M.Vishweshwaraiah Moti Bagh"], 1});

    graphDist.push_back({m1["Sir M.Vishweshwaraiah Moti Bagh"], m1["Durgabai Deshmukh South Campus"], 1});

    graphDist.push_back({m1["Sir M.Vishweshwaraiah Moti Bagh"], m1["Bhikaji Cama Place"], 1});

    graphDist.push_back({m1["Bhikaji Cama Place"], m1["Sir M.Vishweshwaraiah Moti Bagh"], 1});

    graphDist.push_back({m1["Bhikaji Cama Place"], m1["Sarojini Nagar"], 1});

    graphDist.push_back({m1["Sarojini Nagar"], m1["Bhikaji Cama Place"], 1});

    graphDist.push_back({m1["Sarojini Nagar"], m1["Dilli Haat-INA"], 1});

    graphDist.push_back({m1["Dilli Haat-INA"], m1["Sarojini Nagar"], 1});

    graphDist.push_back({m1["Dilli Haat-INA"], m1["South Extension"], 1});

    graphDist.push_back({m1["South Extension"], m1["Dilli Haat-INA"], 1});

    graphDist.push_back({m1["South Extension"], m1["Lajpat Nagar"], 1});

    graphDist.push_back({m1["Lajpat Nagar"], m1["South Extension"], 1});

    graphDist.push_back({m1["Lajpat Nagar"], m1["Vinobapuri"], 1});

    graphDist.push_back({m1["Vinobapuri"], m1["Lajpat Nagar"], 1});

    graphDist.push_back({m1["Vinobapuri"], m1["Ashram"], 1});

    graphDist.push_back({m1["Ashram"], m1["Vinobapuri"], 1});

    graphDist.push_back({m1["Ashram"], m1["Sarai Kale Khan Nizamuddin"], 1});

    graphDist.push_back({m1["Sarai Kale Khan Nizamuddin"], m1["Ashram"], 1});

    graphDist.push_back({m1["Sarai Kale Khan Nizamuddin"], m1["Mayur Vihar-1"], 1});

    graphDist.push_back({m1["Mayur Vihar-1"], m1["Sarai Kale Khan Nizamuddin"], 1});

    graphDist.push_back({m1["Mayur Vihar-1"], m1["Mayur Vihar Pocket-1"], 1});

    graphDist.push_back({m1["Mayur Vihar Pocket-1"], m1["Mayur Vihar-1"], 1});

    graphDist.push_back({m1["Mayur Vihar Pocket-1"], m1["Trilokpuri-Sanjay Lake"], 1});

    graphDist.push_back({m1["Trilokpuri-Sanjay Lake"], m1["Mayur Vihar Pocket-1"], 1});

    graphDist.push_back({m1["Trilokpuri-Sanjay Lake"], m1["East Vinod Nagar-Mayur Vihar-II"], 1});

    graphDist.push_back({m1["East Vinod Nagar-Mayur Vihar-II"], m1["Trilokpuri-Sanjay Lake"], 1});

    graphDist.push_back({m1["East Vinod Nagar-Mayur Vihar-II"], m1["Mandawali West Vinod Nagar"], 1});

    graphDist.push_back({m1["Mandawali West Vinod Nagar"], m1["East Vinod Nagar-Mayur Vihar-II"], 1});

    graphDist.push_back({m1["Mandawali West Vinod Nagar"], m1["IP Extension"], 1});

    graphDist.push_back({m1["IP Extension"], m1["Mandawali West Vinod Nagar"], 1});

    graphDist.push_back({m1["IP Extension"], m1["Anand Vihar I.S.B.T."], 1});

    graphDist.push_back({m1["Anand Vihar I.S.B.T."], m1["IP Extension"], 1});

    graphDist.push_back({m1["Anand Vihar I.S.B.T."], m1["Karkarduma"], 1});

    graphDist.push_back({m1["Karkarduma"], m1["Anand Vihar I.S.B.T."], 1});

    graphDist.push_back({m1["Karkarduma"], m1["Karkarduma Court"], 1});

    graphDist.push_back({m1["Karkarduma Court"], m1["Karkarduma"], 1});

    graphDist.push_back({m1["Karkarduma Court"], m1["Krishna Nagar"], 1});

    graphDist.push_back({m1["Krishna Nagar"], m1["Karkarduma Court"], 1});

    graphDist.push_back({m1["Krishna Nagar"], m1["East Azad Nagar"], 1});

    graphDist.push_back({m1["East Azad Nagar"], m1["Krishna Nagar"], 1});

    graphDist.push_back({m1["East Azad Nagar"], m1["Welcome"], 1});

    graphDist.push_back({m1["Welcome"], m1["East Azad Nagar"], 1});

    graphDist.push_back({m1["Welcome"], m1["Jafrabad"], 1});

    graphDist.push_back({m1["Jafrabad"], m1["Welcome"], 1});

    graphDist.push_back({m1["Jafrabad"], m1["Maujpur-Babarpur"], 1});

    graphDist.push_back({m1["Maujpur-Babarpur"], m1["Jafrabad"], 1});

    graphDist.push_back({m1["Maujpur-Babarpur"], m1["Gokulpuri"], 1});

    graphDist.push_back({m1["Gokulpuri"], m1["Maujpur-Babarpur"], 1});

    graphDist.push_back({m1["Gokulpuri"], m1["Johri Enclave"], 1});

    graphDist.push_back({m1["Johri Enclave"], m1["Gokulpuri"], 1});

    graphDist.push_back({m1["Johri Enclave"], m1["Shiv Vihar"], 1});

    graphDist.push_back({m1["Shiv Vihar"], m1["Johri Enclave"], 1});
}

void internalGraphGreenLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphDist)
{
    graphDist.push_back({m1["Kirti Nagar"], m1["Satguru Ram Singh Marg"], 1});

    graphDist.push_back({m1["Satguru Ram Singh Marg"], m1["Kirti Nagar"], 1});

    graphDist.push_back({m1["Satguru Ram Singh Marg"], m1["Inderlok"], 1});

    graphDist.push_back({m1["Inderlok"], m1["Satguru Ram Singh Marg"], 1});

    graphDist.push_back({m1["Inderlok"], m1["Ashok Park Main"], 1});

    graphDist.push_back({m1["Ashok Park Main"], m1["Inderlok"], 1});

    graphDist.push_back({m1["Ashok Park Main"], m1["Punjabi Bagh"], 1});

    graphDist.push_back({m1["Punjabi Bagh"], m1["Ashok Park Main"], 1});

    graphDist.push_back({m1["Punjabi Bagh"], m1["Punjabi Bagh West"], 1});

    graphDist.push_back({m1["Punjabi Bagh West"], m1["Punjabi Bagh"], 1});

    graphDist.push_back({m1["Punjabi Bagh West"], m1["Shivaji Park"], 1});

    graphDist.push_back({m1["Shivaji Park"], m1["Punjabi Bagh West"], 1});

    graphDist.push_back({m1["Shivaji Park"], m1["Madipur"], 1});

    graphDist.push_back({m1["Madipur"], m1["Shivaji Park"], 1});

    graphDist.push_back({m1["Madipur"], m1["Paschim Vihar East"], 1});

    graphDist.push_back({m1["Paschim Vihar East"], m1["Madipur"], 1});

    graphDist.push_back({m1["Paschim Vihar East"], m1["Paschim Vihar West"], 1});

    graphDist.push_back({m1["Paschim Vihar West"], m1["Paschim Vihar East"], 1});

    graphDist.push_back({m1["Paschim Vihar West"], m1["Peeragarhi"], 1});

    graphDist.push_back({m1["Peeragarhi"], m1["Paschim Vihar West"], 1});

    graphDist.push_back({m1["Peeragarhi"], m1["Udyog Nagar"], 1});

    graphDist.push_back({m1["Udyog Nagar"], m1["Peeragarhi"], 1});

    graphDist.push_back({m1["Udyog Nagar"], m1["Maharaja Surajmal Stadium"], 1});

    graphDist.push_back({m1["Maharaja Surajmal Stadium"], m1["Udyog Nagar"], 1});

    graphDist.push_back({m1["Maharaja Surajmal Stadium"], m1["Nangloi"], 1});

    graphDist.push_back({m1["Nangloi"], m1["Maharaja Surajmal Stadium"], 1});

    graphDist.push_back({m1["Nangloi"], m1["Nangloi Railway Station"], 1});

    graphDist.push_back({m1["Nangloi Railway Station"], m1["Nangloi"], 1});

    graphDist.push_back({m1["Nangloi Railway Station"], m1["Rajdhani Park"], 1});

    graphDist.push_back({m1["Rajdhani Park"], m1["Nangloi Railway Station"], 1});

    graphDist.push_back({m1["Rajdhani Park"], m1["Mundka"], 1});

    graphDist.push_back({m1["Mundka"], m1["Rajdhani Park"], 1});

    graphDist.push_back({m1["Mundka"], m1["Mundka Industrial Area (MIA)"], 1});

    graphDist.push_back({m1["Mundka Industrial Area (MIA)"], m1["Mundka"], 1});

    graphDist.push_back({m1["Mundka Industrial Area (MIA)"], m1["Ghevra Metro Station"], 1});

    graphDist.push_back({m1["Ghevra Metro Station"], m1["Mundka Industrial Area (MIA)"], 1});

    graphDist.push_back({m1["Ghevra Metro Station"], m1["Tikri Kalan"], 1});

    graphDist.push_back({m1["Tikri Kalan"], m1["Ghevra Metro Station"], 1});

    graphDist.push_back({m1["Tikri Kalan"], m1["Tikri Border"], 1});

    graphDist.push_back({m1["Tikri Border"], m1["Tikri Kalan"], 1});

    graphDist.push_back({m1["Tikri Border"], m1["Pandit Shree Ram Sharma"], 1});

    graphDist.push_back({m1["Pandit Shree Ram Sharma"], m1["Tikri Border"], 1});

    graphDist.push_back({m1["Pandit Shree Ram Sharma"], m1["Bahadurgarh City"], 1});

    graphDist.push_back({m1["Bahadurgarh City"], m1["Pandit Shree Ram Sharma"], 1});

    graphDist.push_back({m1["Bahadurgarh City"], m1["Brig. Hoshiar Singh"], 1});

    graphDist.push_back({m1["Brig. Hoshiar Singh"], m1["Bahadurgarh City"], 1});
}

void internalGraphVioletLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphDist)
{
    graphDist.push_back({m1["Kashmere Gate"], m1["Lal Quila"], 1});

    graphDist.push_back({m1["Lal Quila"], m1["Kashmere Gate"], 1});

    graphDist.push_back({m1["Lal Quila"], m1["Jama Masjid"], 1});

    graphDist.push_back({m1["Jama Masjid"], m1["Lal Quila"], 1});

    graphDist.push_back({m1["Jama Masjid"], m1["Delhi Gate"], 1});

    graphDist.push_back({m1["Delhi Gate"], m1["Jama Masjid"], 1});

    graphDist.push_back({m1["Delhi Gate"], m1["ITO"], 1});

    graphDist.push_back({m1["ITO"], m1["Delhi Gate"], 1});

    graphDist.push_back({m1["ITO"], m1["Mandi House"], 1});

    graphDist.push_back({m1["Mandi House"], m1["ITO"], 1});

    graphDist.push_back({m1["Mandi House"], m1["Janpath"], 1});

    graphDist.push_back({m1["Janpath"], m1["Mandi House"], 1});

    graphDist.push_back({m1["Janpath"], m1["Central Secretariat"], 1});

    graphDist.push_back({m1["Central Secretariat"], m1["Janpath"], 1});

    graphDist.push_back({m1["Central Secretariat"], m1["Khan Market"], 1});

    graphDist.push_back({m1["Khan Market"], m1["Central Secretariat"], 1});

    graphDist.push_back({m1["Khan Market"], m1["JLN Stadium"], 1});

    graphDist.push_back({m1["JLN Stadium"], m1["Khan Market"], 1});

    graphDist.push_back({m1["JLN Stadium"], m1["Jangpura"], 1});

    graphDist.push_back({m1["Jangpura"], m1["JLN Stadium"], 1});

    graphDist.push_back({m1["Jangpura"], m1["Lajpat Nagar"], 1});

    graphDist.push_back({m1["Lajpat Nagar"], m1["Jangpura"], 1});

    graphDist.push_back({m1["Lajpat Nagar"], m1["Moolchand"], 1});

    graphDist.push_back({m1["Moolchand"], m1["Lajpat Nagar"], 1});

    graphDist.push_back({m1["Moolchand"], m1["Kailash Colony"], 1});

    graphDist.push_back({m1["Kailash Colony"], m1["Moolchand"], 1});

    graphDist.push_back({m1["Kailash Colony"], m1["Nehru Place"], 1});

    graphDist.push_back({m1["Nehru Place"], m1["Kailash Colony"], 1});

    graphDist.push_back({m1["Nehru Place"], m1["Kalkaji Mandir"], 1});

    graphDist.push_back({m1["Kalkaji Mandir"], m1["Nehru Place"], 1});

    graphDist.push_back({m1["Kalkaji Mandir"], m1["Govind Puri"], 1});

    graphDist.push_back({m1["Govind Puri"], m1["Kalkaji Mandir"], 1});

    graphDist.push_back({m1["Govind Puri"], m1["Harkesh Nagar Okhla"], 1});

    graphDist.push_back({m1["Harkesh Nagar Okhla"], m1["Govind Puri"], 1});

    graphDist.push_back({m1["Harkesh Nagar Okhla"], m1["Jasola Apollo"], 1});

    graphDist.push_back({m1["Jasola Apollo"], m1["Harkesh Nagar Okhla"], 1});

    graphDist.push_back({m1["Jasola Apollo"], m1["Sarita Vihar"], 1});

    graphDist.push_back({m1["Sarita Vihar"], m1["Jasola Apollo"], 1});

    graphDist.push_back({m1["Sarita Vihar"], m1["Mohan Estate"], 1});

    graphDist.push_back({m1["Mohan Estate"], m1["Sarita Vihar"], 1});

    graphDist.push_back({m1["Mohan Estate"], m1["Tughlakabad Station"], 1});

    graphDist.push_back({m1["Tughlakabad Station"], m1["Mohan Estate"], 1});

    graphDist.push_back({m1["Tughlakabad Station"], m1["Badarpur Border"], 1});

    graphDist.push_back({m1["Badarpur Border"], m1["Tughlakabad Station"], 1});

    graphDist.push_back({m1["Badarpur Border"], m1["Sarai"], 1});

    graphDist.push_back({m1["Sarai"], m1["Badarpur Border"], 1});

    graphDist.push_back({m1["Sarai"], m1["NHPC Chowk"], 1});

    graphDist.push_back({m1["NHPC Chowk"], m1["Sarai"], 1});

    graphDist.push_back({m1["NHPC Chowk"], m1["Mewala Maharajpur"], 1});

    graphDist.push_back({m1["Mewala Maharajpur"], m1["NHPC Chowk"], 1});

    graphDist.push_back({m1["Mewala Maharajpur"], m1["Sector-28"], 1});

    graphDist.push_back({m1["Sector-28"], m1["Mewala Maharajpur"], 1});

    graphDist.push_back({m1["Sector-28"], m1["Badkal Mor"], 1});

    graphDist.push_back({m1["Badkal Mor"], m1["Sector-28"], 1});

    graphDist.push_back({m1["Badkal Mor"], m1["Old Faridabad"], 1});

    graphDist.push_back({m1["Old Faridabad"], m1["Badkal Mor"], 1});

    graphDist.push_back({m1["Old Faridabad"], m1["Neelam Chowk Ajronda"], 1});

    graphDist.push_back({m1["Neelam Chowk Ajronda"], m1["Old Faridabad"], 1});

    graphDist.push_back({m1["Neelam Chowk Ajronda"], m1["Bata Chowk"], 1});

    graphDist.push_back({m1["Bata Chowk"], m1["Neelam Chowk Ajronda"], 1});

    graphDist.push_back({m1["Bata Chowk"], m1["Escorts Mujesar"], 1});

    graphDist.push_back({m1["Escorts Mujesar"], m1["Bata Chowk"], 1});

    graphDist.push_back({m1["Escorts Mujesar"], m1["Sant Surdas (Sihi)"], 1});

    graphDist.push_back({m1["Sant Surdas (Sihi)"], m1["Escorts Mujesar"], 1});

    graphDist.push_back({m1["Sant Surdas (Sihi)"], m1["Raja Nahar Singh (Ballabhgarh)"], 1});

    graphDist.push_back({m1["Raja Nahar Singh (Ballabhgarh)"], m1["Sant Surdas (Sihi)"], 1});
}

void internalGraphBlueLine(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphDist)
{
    graphDist.push_back({m1["Noida Electronic City"], m1["Sec-62 Noida"], 1});

    graphDist.push_back({m1["Sec-62 Noida"], m1["Noida Electronic City"], 1});

    graphDist.push_back({m1["Sec-62 Noida"], m1["Sec-59 Noida"], 1});

    graphDist.push_back({m1["Sec-59 Noida"], m1["Sec-62 Noida"], 1});

    graphDist.push_back({m1["Sec-59 Noida"], m1["Sec-61 Noida"], 1});

    graphDist.push_back({m1["Sec-61 Noida"], m1["Sec-59 Noida"], 1});

    graphDist.push_back({m1["Sec-61 Noida"], m1["Sec-52 Noida"], 1});

    graphDist.push_back({m1["Sec-52 Noida"], m1["Sec-61 Noida"], 1});

    graphDist.push_back({m1["Sec-52 Noida"], m1["Sec-34 Noida"], 1});

    graphDist.push_back({m1["Sec-34 Noida"], m1["Sec-52 Noida"], 1});

    graphDist.push_back({m1["Sec-34 Noida"], m1["Noida City Centre"], 1});

    graphDist.push_back({m1["Noida City Centre"], m1["Sec-34 Noida"], 1});

    graphDist.push_back({m1["Noida City Centre"], m1["Golf Course"], 1});

    graphDist.push_back({m1["Golf Course"], m1["Noida City Centre"], 1});

    graphDist.push_back({m1["Golf Course"], m1["Botanical Garden"], 1});

    graphDist.push_back({m1["Botanical Garden"], m1["Golf Course"], 1});

    graphDist.push_back({m1["Botanical Garden"], m1["Noida Sec-18"], 1});

    graphDist.push_back({m1["Noida Sec-18"], m1["Botanical Garden"], 1});

    graphDist.push_back({m1["Noida Sec-18"], m1["Noida Sec-16"], 1});

    graphDist.push_back({m1["Noida Sec-16"], m1["Noida Sec-18"], 1});

    graphDist.push_back({m1["Noida Sec-16"], m1["Noida Sec-15"], 1});

    graphDist.push_back({m1["Noida Sec-15"], m1["Noida Sec-16"], 1});

    graphDist.push_back({m1["Noida Sec-15"], m1["New Ashok Nagar"], 1});

    graphDist.push_back({m1["New Ashok Nagar"], m1["Noida Sec-15"], 1});

    graphDist.push_back({m1["New Ashok Nagar"], m1["Mayur Vihar Extension"], 1});

    graphDist.push_back({m1["Mayur Vihar Extension"], m1["New Ashok Nagar"], 1});

    graphDist.push_back({m1["Mayur Vihar Extension"], m1["Mayur Vihar-1"], 1});

    graphDist.push_back({m1["Mayur Vihar-1"], m1["Mayur Vihar Extension"], 1});

    graphDist.push_back({m1["Mayur Vihar-1"], m1["Akshardham"], 1});

    graphDist.push_back({m1["Akshardham"], m1["Mayur Vihar-1"], 1});

    graphDist.push_back({m1["Akshardham"], m1["Yamuna Bank"], 1});

    graphDist.push_back({m1["Yamuna Bank"], m1["Akshardham"], 1});

    graphDist.push_back({m1["Yamuna Bank"], m1["Indraprastha"], 1});

    graphDist.push_back({m1["Indraprastha"], m1["Yamuna Bank"], 1});

    graphDist.push_back({m1["Indraprastha"], m1["Supreme Court"], 1});

    graphDist.push_back({m1["Supreme Court"], m1["Indraprastha"], 1});

    graphDist.push_back({m1["Supreme Court"], m1["Mandi House"], 1});

    graphDist.push_back({m1["Mandi House"], m1["Supreme Court"], 1});

    graphDist.push_back({m1["Mandi House"], m1["Barakhamba Road"], 1});

    graphDist.push_back({m1["Barakhamba Road"], m1["Mandi House"], 1});

    graphDist.push_back({m1["Barakhamba Road"], m1["Rajiv Chowk"], 1});

    graphDist.push_back({m1["Rajiv Chowk"], m1["Barakhamba Road"], 1});

    graphDist.push_back({m1["Rajiv Chowk"], m1["Ramakrishna Ashram Marg"], 1});

    graphDist.push_back({m1["Ramakrishna Ashram Marg"], m1["Rajiv Chowk"], 1});

    graphDist.push_back({m1["Ramakrishna Ashram Marg"], m1["Jhandewalan"], 1});

    graphDist.push_back({m1["Jhandewalan"], m1["Ramakrishna Ashram Marg"], 1});

    graphDist.push_back({m1["Jhandewalan"], m1["Karol Bagh"], 1});

    graphDist.push_back({m1["Karol Bagh"], m1["Jhandewalan"], 1});

    graphDist.push_back({m1["Karol Bagh"], m1["Rajendra Place"], 1});

    graphDist.push_back({m1["Rajendra Place"], m1["Karol Bagh"], 1});

    graphDist.push_back({m1["Rajendra Place"], m1["Patel Nagar"], 1});

    graphDist.push_back({m1["Patel Nagar"], m1["Rajendra Place"], 1});

    graphDist.push_back({m1["Patel Nagar"], m1["Shadipur"], 1});

    graphDist.push_back({m1["Shadipur"], m1["Patel Nagar"], 1});

    graphDist.push_back({m1["Shadipur"], m1["Kirti Nagar"], 1});

    graphDist.push_back({m1["Kirti Nagar"], m1["Shadipur"], 1});

    graphDist.push_back({m1["Kirti Nagar"], m1["Moti Nagar"], 1});

    graphDist.push_back({m1["Moti Nagar"], m1["Kirti Nagar"], 1});

    graphDist.push_back({m1["Moti Nagar"], m1["Ramesh Nagar"], 1});

    graphDist.push_back({m1["Ramesh Nagar"], m1["Moti Nagar"], 1});

    graphDist.push_back({m1["Ramesh Nagar"], m1["Rajouri Garden"], 1});

    graphDist.push_back({m1["Rajouri Garden"], m1["Ramesh Nagar"], 1});

    graphDist.push_back({m1["Rajouri Garden"], m1["Tagore Garden"], 1});

    graphDist.push_back({m1["Tagore Garden"], m1["Rajouri Garden"], 1});

    graphDist.push_back({m1["Tagore Garden"], m1["Subhash Nagar"], 1});

    graphDist.push_back({m1["Subhash Nagar"], m1["Tagore Garden"], 1});

    graphDist.push_back({m1["Subhash Nagar"], m1["Tilak Nagar"], 1});

    graphDist.push_back({m1["Tilak Nagar"], m1["Subhash Nagar"], 1});

    graphDist.push_back({m1["Tilak Nagar"], m1["Janakpuri East"], 1});

    graphDist.push_back({m1["Janakpuri East"], m1["Tilak Nagar"], 1});

    graphDist.push_back({m1["Janakpuri East"], m1["Janakpuri West"], 1});

    graphDist.push_back({m1["Janakpuri West"], m1["Janakpuri East"], 1});

    graphDist.push_back({m1["Janakpuri West"], m1["Uttam Nagar East"], 1});

    graphDist.push_back({m1["Uttam Nagar East"], m1["Janakpuri West"], 1});

    graphDist.push_back({m1["Uttam Nagar East"], m1["Uttam Nagar West"], 1});

    graphDist.push_back({m1["Uttam Nagar West"], m1["Uttam Nagar East"], 1});

    graphDist.push_back({m1["Uttam Nagar West"], m1["Nawada"], 1});

    graphDist.push_back({m1["Nawada"], m1["Uttam Nagar West"], 1});

    graphDist.push_back({m1["Nawada"], m1["Dwarka Mor"], 1});

    graphDist.push_back({m1["Dwarka Mor"], m1["Nawada"], 1});

    graphDist.push_back({m1["Dwarka Mor"], m1["Dwarka"], 1});

    graphDist.push_back({m1["Dwarka"], m1["Dwarka Mor"], 1});

    graphDist.push_back({m1["Dwarka"], m1["Dwarka Sector-14"], 1});

    graphDist.push_back({m1["Dwarka Sector-14"], m1["Dwarka"], 1});

    graphDist.push_back({m1["Dwarka Sector-14"], m1["Dwarka Sector-13"], 1});

    graphDist.push_back({m1["Dwarka Sector-13"], m1["Dwarka Sector-14"], 1});

    graphDist.push_back({m1["Dwarka Sector-13"], m1["Dwarka Sector-12"], 1});

    graphDist.push_back({m1["Dwarka Sector-12"], m1["Dwarka Sector-13"], 1});

    graphDist.push_back({m1["Dwarka Sector-12"], m1["Dwarka Sector-11"], 1});

    graphDist.push_back({m1["Dwarka Sector-11"], m1["Dwarka Sector-12"], 1});

    graphDist.push_back({m1["Dwarka Sector-11"], m1["Dwarka Sector-10"], 1});

    graphDist.push_back({m1["Dwarka Sector-10"], m1["Dwarka Sector-11"], 1});

    graphDist.push_back({m1["Dwarka Sector-10"], m1["Dwarka Sector-9"], 1});

    graphDist.push_back({m1["Dwarka Sector-9"], m1["Dwarka Sector-10"], 1});

    graphDist.push_back({m1["Dwarka Sector-9"], m1["Dwarka Sector-8"], 1});

    graphDist.push_back({m1["Dwarka Sector-8"], m1["Dwarka Sector-9"], 1});

    graphDist.push_back({m1["Dwarka Sector-8"], m1["Dwarka Sector-21"], 1});

    graphDist.push_back({m1["Dwarka Sector-21"], m1["Dwarka Sector-8"], 1});
}

void internalGraphBlueLineBranch(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphDist)
{
    graphDist.push_back({m1["Yamuna Bank"], m1["Laxmi Nagar"], 1});

    graphDist.push_back({m1["Laxmi Nagar"], m1["Yamuna Bank"], 1});

    graphDist.push_back({m1["Laxmi Nagar"], m1["Nirman Vihar"], 1});

    graphDist.push_back({m1["Nirman Vihar"], m1["Laxmi Nagar"], 1});

    graphDist.push_back({m1["Nirman Vihar"], m1["Preet Vihar"], 1});

    graphDist.push_back({m1["Preet Vihar"], m1["Nirman Vihar"], 1});

    graphDist.push_back({m1["Preet Vihar"], m1["Karkarduma"], 1});

    graphDist.push_back({m1["Karkarduma"], m1["Preet Vihar"], 1});

    graphDist.push_back({m1["Karkarduma"], m1["Anand Vihar I.S.B.T."], 1});

    graphDist.push_back({m1["Anand Vihar I.S.B.T."], m1["Karkarduma"], 1});

    graphDist.push_back({m1["Anand Vihar I.S.B.T."], m1["Kaushambi"], 1});

    graphDist.push_back({m1["Kaushambi"], m1["Anand Vihar I.S.B.T."], 1});

    graphDist.push_back({m1["Kaushambi"], m1["Vaishali"], 1});

    graphDist.push_back({m1["Vaishali"], m1["Kaushambi"], 1});
}

void assignAllInternalGraph(map<string, int> &m1, map<int, string> &m2, vector<vector<int>> &graphDist)
{
    internalGraphMagentaLine(m1, m2, graphDist);
    internalGraphYellowLine(m1, m2, graphDist);
    internalGraphRedLine(m1, m2, graphDist);
    internalGraphPinkLine(m1, m2, graphDist);
    internalGraphGreenLine(m1, m2, graphDist);
    internalGraphVioletLine(m1, m2, graphDist);
    internalGraphBlueLine(m1, m2, graphDist);
    internalGraphBlueLineBranch(m1, m2, graphDist);
}
